#include <iostream>

struct sample{
    int a;
    char ch;
};

void f1(sample parm);


int main(int argc, char* argv[]){
    struct sample arg;
    arg.a = 1000;
    arg.ch = 'x';
    f1(arg);
    return 0;
}

void f1(sample parm){
    std::cout << parm.a << " " << parm.ch << "\n";
}
