#include <iostream>
using namespace std;

class transport{
    int wheels;
    int passengers;
    public:
        void set_wheels(int num) {wheels=num;}
        int get_wheels() {return wheels;}
        void set_pass(int num) {passengers=num;}
        int get_pass() {return passengers;}
};

// class child_name : type parent_name
// {
//    code ...
// }

class truck : public transport{
    int cargo;
    public:
        void set_cargo(int size) {cargo=size;}
        int get_cargo() {return cargo;}
        void show();
};



class base{
    int i, j;
    public:
        void set(int a, int b) {i=a; j=b;}
        void show() {cout << i << " " << j << endl;}
};

class derived : public base{
    int k;
    public:
        derived(int x) {k=x;}
        void showk() {cout << k << endl;}
};

int main(int argc, char* argv[]){
    derived obj1(5);

    obj1.set(1,2);
    obj1.show();
    obj1.showk();

    return 0;
}


