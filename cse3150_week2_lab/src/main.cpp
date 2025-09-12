#include <iostream>
#include <string>
#include "parser.h"

int main() {
    std::string fullName;
    std::string email;

  
    std::getline(std::cin, fullName);
    std::getline(std::cin, email);

    std::string* firstName = new std::string;
    std::string* lastName = new std::string;

    StringUtils::parseName(fullName, firstName, lastName);
    std::string username = StringUtils::getUsername(email);

    std::cout << "First Name: " << *firstName << std::endl;
    std::cout << "Last Name: " << *lastName << std::endl;
    std::cout << "Username: " << username << std::endl;

    delete firstName;
    delete lastName;

    return 0;
}
