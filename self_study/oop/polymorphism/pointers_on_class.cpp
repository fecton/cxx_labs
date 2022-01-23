#include <iostream>

using namespace std;

class B_class
{
    private:
        int a;
    public:
        int b,c;
        void whoami() {cout << "That's B_class!!!" << endl;};
};

class D_class: public B_class{
    public:
        void whoami() {cout << "That's D_class! :D" << endl;};
};


// B_class *p; pointer object type B_class
// B_class B_ob; object B_class
// D_class D_ob; object D_class

// it also works
// p = &B_ob; p points an object B_class
// p = &D_ob; p points an object D_class which is an object, derived from B_class

int main(int argc, char const *argv[])
{
    
    D_class dclass;
    dclass.whoami();
    dclass.a = 50;


    return 0;

    B_class *B_pointer;
    D_class *D_pointer;

    B_class B_object1;
    D_class D_object1;

    B_object1.whoami();
    D_object1.whoami();

    B_pointer = &B_object1;
    B_pointer->whoami();

    D_pointer = &D_object1;
    D_pointer->whoami();


    return 0;
}

