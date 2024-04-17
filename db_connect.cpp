#include <mysql/jdbc.h> // MySQL C++ Connector
#include <iostream>
#include <string>

using namespace std;
using namespace sql;

int main() {
    // Connect to MySQL database
    mysql::MySQL_Driver *driver;
    Connection *con;

    driver = mysql::get_mysql_driver_instance();
    con = driver->connect("tcp://127.0.0.1:3306", "username", "password"); // Replace username and password

    // Create and select the database
    con->setSchema("bank_system");

    // Create tables
    Statement *stmt = con->createStatement();
    stmt->execute("CREATE TABLE IF NOT EXISTS Banks(BankID INT PRIMARY KEY, BankName VARCHAR(255), Address VARCHAR(255), ContactInfo VARCHAR(255))");
    stmt->execute("CREATE TABLE IF NOT EXISTS Customers(CustomerID INT PRIMARY KEY, CustomerName VARCHAR(255), BankID INT, Balance FLOAT, FOREIGN KEY(BankID) REFERENCES Banks(BankID))");
    stmt->execute("CREATE TABLE IF NOT EXISTS Transactions(TransactionID INT PRIMARY KEY, SenderID INT, ReceiverID INT, Amount FLOAT, Timestamp TIMESTAMP, FOREIGN KEY(SenderID) REFERENCES Customers(CustomerID), FOREIGN KEY(ReceiverID) REFERENCES Customers(CustomerID))");
    stmt->execute("CREATE TABLE IF NOT EXISTS UnauthorizedTransactions(TransactionID INT PRIMARY KEY, SenderID INT, ReceiverID INT, Amount FLOAT, Timestamp TIMESTAMP, FOREIGN KEY(SenderID) REFERENCES Customers(CustomerID), FOREIGN KEY(ReceiverID) REFERENCES Customers(CustomerID))");

    // Close connections
    delete stmt;
    delete con;

    return 0;
}
