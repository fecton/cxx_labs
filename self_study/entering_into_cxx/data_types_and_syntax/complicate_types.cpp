#include <iostream>
#include <string>

int main(int argc, char* argv[]){
    std::string my_string = "Hello, world!";

    std::cout << my_string << std::endl;
    std::cout << "my_string size: " << my_string.size() << std::endl;
    std::cout << "my_string length: " << my_string.length() << std::endl;
    std::cout << "empty string: " << std::boolalpha << my_string.empty() << std::endl;
    
    std::string substr = my_string.substr(0, 7);
    std::cout << "substring[0-7]: " << substr << std::endl;

    return 0;
}


