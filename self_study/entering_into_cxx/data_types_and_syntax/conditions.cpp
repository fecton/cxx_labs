#include <iostream>

int main(int argc, char* argv[]){

    bool choice = true;

    if(choice){
        std::cout << "It's true!" << std::endl;
    }
    else{
        std::cout << "It's FALSE" << std::endl;
    }

    int my_number = 2;

    switch(my_number){
        case 1:
            std::cout << "First message" << std::endl;
            break;
        case 2:
            std::cout << "Second message" << std::endl;
            break;
        default:
            std::cout << "Default message" << std::endl;
            break;
    }

    return 0;
}
