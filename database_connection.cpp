#include <iostream>
#include <mysql/mysql.h> // Include MySQL Connector/C++ headers
#include <iostream>

int main() {
    MYSQL *conn = mysql_init(nullptr); // Initialize MySQL connection object

    if (conn == nullptr) {
        std::cerr << "Error: Failed to initialize MySQL connection object." << std::endl;
        return 1;
    }

    // Connect to the MySQL database (using localhost)
    if (!mysql_real_connect(conn, "localhost", "root", "", "anti_corruption", 0, nullptr, 0)) {
        std::cerr << "Error: Failed to connect to MySQL database: " << mysql_error(conn) << std::endl;
        mysql_close(conn);
        return 1;
    }

    // Example: Execute a SQL query
    if (mysql_query(conn, "SELECT * FROM your_table")) {
        std::cerr << "Query Execution Error: " << mysql_error(conn) << std::endl;
    }

    // Close the connection
    mysql_close(conn);

    return 0;
}

