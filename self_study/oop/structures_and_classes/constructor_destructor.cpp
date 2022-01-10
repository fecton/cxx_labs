#include <iostream>
using namespace std;

class klass{
    int k[100];
    int sloc, rloc;
    int who;

    public:
        klass(int id);
        ~klass();
        void kput(int i);
        int kget();
};

klass::klass(int id){
    sloc = rloc = 0;
    who = id;
    cout << "Order is: " << who << "initialized!" << endl;
}

klass::~klass(){

}

int main(int argc, char* argv[]){
    klass a = klass(101);
    klass a(101);
    // class_name variable_name(arg1, arg2 ... argN);
    // comparing struct and class: struct is always public and class could be private and public meanwhile
    return 0;
}

