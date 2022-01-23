#include <iostream>

int calculation(int a, int b){
    return 2*a + 3*b;
}

int main(int argc, char const *argv[])
{
    for (int i = 0; i < argc; i++)
    {
        std::cout << argv[i] << std::endl;
    }

    std::cout << calculation(argc, argc) << std::endl;  
    
    return 0;
}


