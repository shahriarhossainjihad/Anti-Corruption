#include <iostream>
#include <fstream>
#include <string>
#include <memory> // For smart pointers
#include <stdexcept> // For exceptions

class UserAuthentication {
private:
    const std::string recordsFile = "records.txt";

public:
    void displayMenu() {
        std::cout << "\t\t\t_____________________________\n\n\n";
        std::cout << "\t\t\t Welcome to SoftBoss  \n\n\n";
        std::cout << "\t\t\t____________ Menu ___________\n\n\n";
        std::cout << "                             \n\n";
        std::cout << "\t\t\|t\ Press 1 To login \t\t|\n";
        std::cout << "\t\t\t\|\t\ Press 2 To sign up \t\t|\n";
        std::cout << "\t\t\t\|\t\ Press 3 To forgot \t\t|\n";
        std::cout << "\t\t\t\|\t\ Press 4 To exit\t\t|\n";
        std::cout << "\n\t\t Please enter your choice: ";
    }

    void processChoice() {
        int choice;
        std::cin >> choice;
        std::cout << std::endl;

        switch (choice) {
            case 1:
                login();
                break;
            case 2:
                registration();
                break;
            case 3:
                forgot();
                break;
            case 4:
                std::cout << "Thank you\n";
                break;
            default:
                std::cout << "Invalid choice! Please select from the options given above.\n";
                break;
        }
    }

private:
    void login() {
        std::string userId, password, id, pass;
        std::cout << "\t\t\t Please Enter the Username and password: \n";
        std::cout << "\t\t\t USERNAME: ";
        std::cin >> userId;
        std::cout << "\t\t\t PASSWORD: ";
        std::cin >> password;

        std::ifstream input(recordsFile);
        if (!input.is_open()) {
            std::cerr << "Error: Unable to open file for reading.\n";
            return;
        }

        while (input >> id >> pass) {
            if (id == userId && pass == password) {
                std::cout << userId << "\nYour login is successful.\nThanks for logging in.\n";
                return;
            }
        }
        std::cout << "\nLogin error! Please check your Username and password.\n";
    }

    void registration() {
        std::string ruserId, rpassword;
        std::cout << "\t\t\t Enter the Username: ";
        std::cin >> ruserId;
        std::cout << "\t\t\t Enter the password: ";
        std::cin >> rpassword;

        std::ofstream output(recordsFile, std::ios::app);
        if (!output.is_open()) {
            std::cerr << "Error: Unable to open file for writing.\n";
            return;
        }

        output << ruserId << ' ' << rpassword << '\n';
        std::cout << "\n\t\t\t Registration is successful!\n";
    }

    void forgot() {
        int option;
        std::cout << "\t\t\t Forgot your password? No worries.\n";
        std::cout << "Press 1 to search your ID by username.\n";
        std::cout << "Press 2 to go back to the main menu.\n";
        std::cout << "\t\t\t Enter your choice: ";
        std::cin >> option;

        switch (option) {
            case 1: {
                std::string suserId, sId, spass;
                std::cout << "\n\t\t\t Enter the username you remember: ";
                std::cin >> suserId;

                std::ifstream input(recordsFile);
                if (!input.is_open()) {
                    std::cerr << "Error: Unable to open file for reading.\n";
                    return;
                }

                while (input >> sId >> spass) {
                    if (sId == suserId) {
                        std::cout << "\nYour account is found.\n";
                        std::cout << "Your password is: " << spass << '\n';
                        return;
                    }
                }
                std::cout << "\nSorry, your account is not found!\n";
                break;
            }
            case 2:
                return;
            default:
                std::cout << "\t\t\t Wrong choice! Please try again later.\n";
                break;
        }
    }
};

int main() {
    UserAuthentication auth;
    auth.displayMenu();
    auth.processChoice();

    return 0;
}
