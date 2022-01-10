#include <iostream>

struct stype{
    int a,b;
};

int main(int argc, char* argv[]){
    stype svar1, svar2;
    svar1.a = svar2.b = 10;
    svar2.a = svar1.b = 20;

    svar2 = svar1;
    std::cout << "Attribution structures." << std::endl;
    std::cout << "svar1: " << svar1.a << " " << svar1.b << std::endl;
    std::cout << "svar2: " << svar2.a << " " << svar2.b << std::endl;

    return 0;
}

