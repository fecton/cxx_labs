#include <iostream>
#include <string>
#include <limits>

int main(int argc, char* argv[]){
    
    // char type
    unsigned char uc = 254;
    signed char sc = -125;

    // short type
    short si = 137;
    unsigned short us = 342;

    // int type
    int https = -443;
    unsigned int ssh = 22;

    // long type
    long int li = 578;
    unsigned long ul = 578;

    // long long type
    long long int lli = 439858934;
    unsigned long long ull = 232412;

    std::cout << "Unsigned char = " << uc << std::endl;
    std::cout << "Signed char = " << sc << std::endl;
    std::cout << "Sizeof(char) = " << sizeof(char) << std::endl;
    std::cout << "Signed char max > " << (int)std::numeric_limits<signed char>::max() << std::endl;
    std::cout << "Unsigned char max > " << (int)std::numeric_limits<unsigned char>::max() << std::endl << std::endl;

    std::cout << "short int = " << si << std::endl;
    std::cout << "unsigned short = " << us << std::endl;
    std::cout << "Sizeof(short) = " << sizeof(short) << std::endl;
    std::cout << "Signed short max > " << std::numeric_limits<signed short>::max() << std::endl;
    std::cout << "Unsigned short max > " << std::numeric_limits<unsigned short>::max() << std::endl << std::endl;

    std::cout << "int = " << https << std::endl;
    std::cout << "unsigned int = " << ssh << std::endl;
    std::cout << "Sizeof(int) = " << sizeof(int) << std::endl;
    std::cout << "Signed int max > " << std::numeric_limits<signed int>::max() << std::endl;
    std::cout << "Unsigned int max > " << std::numeric_limits<unsigned int>::max() << std::endl << std::endl;

    std::cout << "long = " << li << std::endl;
    std::cout << "unsigned long = " << ul << std::endl;
    std::cout << "Sizeof(long) = " << sizeof(long) << std::endl;
    std::cout << "Signed long max > " << std::numeric_limits<signed long>::max() << std::endl;
    std::cout << "Unsigned long max > " << std::numeric_limits<unsigned long>::max() << std::endl << std::endl;

    std::cout << "long long = " << li << std::endl;
    std::cout << "unsigned long long = " << ull << std::endl;
    std::cout << "Sizeof(long long) = " << sizeof(long long) << std::endl;
    std::cout << "Signed long long max > " << std::numeric_limits<signed long long>::max() << std::endl;
    std::cout << "Unsigned long long max > " << std::numeric_limits<unsigned long long>::max() << std::endl << std::endl;


    return 0;
}


