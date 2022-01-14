#include <iostream>
using namespace std;

class super_class{
    int i;
    public:
        void set_i(int x) { i=x; }
        void out_i() { cout << i << " "; }
};

void f(super_class x){
    x.out_i();
    x.set_i(1000);
    x.out_i();
}

int main(int argc, char* argv[]){
    super_class obj1;

    f(obj1);


    return 0;
}



