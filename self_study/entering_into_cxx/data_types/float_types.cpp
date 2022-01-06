#include <iostream>
#include <limits>
#include <string>

int main(int argc, char* argv[]){
    
    // float type
    float f = 0.45f;
    float sf = -12.096f;
    float uf = 3.331f;
    
    // dobule type
    double d = 3.2342;
    double sd = -6.23432;
    double ud = 65.523432;

    // long double type
    long double ld = 234234.23432432342;

    std::cout << "Float: " << f << std::endl;
    std::cout << "Signed float: " << f << std::endl;
    std::cout << "Unsigned float: " << f << std::endl;
    std::cout << "Float max > " << std::numeric_limits<float>::max() << std::endl << std::endl; 

    std::cout << "Double: " << f << std::endl;
    std::cout << "Signed double: " << f << std::endl;
    std::cout << "Unsigned double: " << f << std::endl;
    std::cout << "Double max > " << std::numeric_limits<double>::max() << std::endl << std::endl; 

    std::cout << "Long double: " << ld << std::endl;
    std::cout << "Long double max > " << std::numeric_limits<long double>::max() << std::endl << std::endl;

    return 0;
}




