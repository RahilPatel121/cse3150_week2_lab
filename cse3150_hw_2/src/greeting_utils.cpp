#include "greeting_utils.h"
#include <iostream>

namespace GreetingUtils {

    std::string create_message(const std::string& name) {
	return "Hello, " + name + "!";
    }


    char* format_as_c_string(const std::string& msg) {
	size_t msg_size = msg.size();
	char* cstr = new char[msg.size() + 1];

	for (int i = 0; i < msg.size(); i++) {
		cstr[i] = msg[i];
	}

	cstr[msg_size] = '\0';


	return cstr;

	}

}


	
