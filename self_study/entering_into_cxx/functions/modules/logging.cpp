#include "logging.h"
#include <iostream>


void warning(const char* message){
    std::cout << "[WARNING] " << message << std::endl;
}

void error(const char* message){
    std::cout << "[ERROR] " << message << std::endl;
}



