#include <iostream>
using namespace std;

// constructor_child_class(arg1 ... argN):
//     base1 (arg1 ... argN),
//     base2 (arg1 ... argN),
//     .
//     .
//     .
//     baseN (arg1 ... argN);
//     {
//         constructor_child_class' code ...
//     }

class base{
    public:
        base() {cout << "Creating base-object" << endl;}
        ~base() {cout << "Removing base-object" << endl;}
};

class derived: public base{
    public:
        derived() {cout << "Creating derived-object" << endl;}
        ~derived() {cout << "Removing derived-object" << endl;}
};

int main(int argc, char* argv[]){
    derived obj1;


    return 0;
}


