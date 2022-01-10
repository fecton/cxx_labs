//    |||||||
// ch |byte0|
//    |||||||
//    |     |  i
//    |||||||
//    |byte1| 
//    |||||||

#include <iostream>

union utype{
    short int i;
    char ch;
};

void func1(utype *un){
    un -> i=66;
}

int main(int argc, char* argv[]){
    utype u_var;
    u_var.ch = 'A';

    std::cout << u_var.ch << std::endl;
    std::cout << u_var.i << std::endl << std::endl;

    func1(&u_var);

    std::cout << u_var.ch << std::endl;
    std::cout << u_var.i << std::endl;

    return 0;
}


