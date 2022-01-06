#include <iostream>
#include <string>
#include "version.h"
//  $ g++ hello_world.cpp -o hello -std=c++14
int main(int argc, char* argv[]){
    std::cout << "Hello, world!" << std::endl;
    std::cout << "Version: " << test::getVersion() << std::endl;

    return 0;
}

