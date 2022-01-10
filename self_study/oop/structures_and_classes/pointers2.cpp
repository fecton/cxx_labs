#include <iostream>
// structure links 
struct mystruct{
    int a;
    int b;
};

mystruct &f(mystruct &var);

int main(int argc, char* argv[]){
    mystruct x,y;
    x.a = 10;
    x.b = 20;

    y = f(x);

    std::cout << "Modified values of fieds: x.a and x.b: ";
    std::cout << x.a << " " << x.b << std::endl;
    std::cout << "Modified values of fieds: y.a and y.b: ";    
    std::cout << y.a << " " << y.b << std::endl;

    return 0;
}

mystruct &f(mystruct &var){
    var.a = var.a * var.a;
    var.b = var.b / var.b;
    return var;
}