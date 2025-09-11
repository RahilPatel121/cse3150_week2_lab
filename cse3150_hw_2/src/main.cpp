#include "greeting_utils.h"
#include <iostream>
#include <string>
int main() {
	
    std::cout << "Enter name: ";
    std::string name;
    std::getline(std::cin, name);

	
    std::string greeting = GreetingUtils::create_message(name);


    char* cstr = GreetingUtils::format_as_c_string(greeting);

    std::cout << "\n" << cstr <<std::endl;


    delete[] cstr;

    return 0;

}
