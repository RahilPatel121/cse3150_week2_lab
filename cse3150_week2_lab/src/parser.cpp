#include "parser.h"
#include <string>

namespace StringUtils {

    void parseName(const std::string& fullName, std::string* firstName, std::string* lastName) {
        size_t openSpace = fullName.find(" ");
        *firstName = fullName.substr(0, openSpace);
        *lastName  = fullName.substr(openSpace + 1);
    }

    std::string getUsername(const std::string& email) {
        size_t atPos = email.find("@");
        return email.substr(0, atPos);
    }

}
