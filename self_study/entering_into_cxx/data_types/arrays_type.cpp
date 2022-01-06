#include <iostream>
#include <string>

int main(int argc, char* argv[]){
    int a[] = {0,1,2,3,4,5,6,7};

    std::cout << "Sizeof(a) = " << sizeof(a) << std::endl;
    std::cout << "Index a: " << a << std::endl;
    std::cout << "a[0] = " << a[0] << std::endl;
    std::cout << "a[3] = " << a[3] << std::endl;
    std::cout << "a[6] = " << a[6] << std::endl << std::endl;


    float f[] = {0.1f, 0.2f, 0.3f, 0.4f};

    std::cout << "Sizeof(f) = " << sizeof(f) << std::endl;
    std::cout << "Index f: " << a << std::endl;
    std::cout << "f[0] = " << f[0] << std::endl;
    std::cout << "f[3] = " << f[3] << std::endl;
    std::cout << "f[6] = " << f[6] << std::endl << std::endl;


    char c[] = {'H', 'e', 'l', 'l', 'o', '!'};

    std::cout << "Sizeof(c) = " << sizeof(c) << std::endl;
    std::cout << "Full value: " << c << std::endl;
    std::cout << "c[0] = " << c[0] << std::endl;
    std::cout << "c[3] = " << c[3] << std::endl;
    std::cout << "c[6] = " << c[6] << std::endl << std::endl;


    char cc[] = {'H', 'e', 'l', 'l', 'o', '!', '\0'};

    std::cout << "Sizeof(c) = " << sizeof(cc) << std::endl;
    std::cout << "Full value: " << cc << std::endl;

    return 0;
}



