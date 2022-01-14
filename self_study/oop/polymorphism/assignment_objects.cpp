#include <iostream>
using namespace std;

class myclass{
    public:
        int a,b;
        void setab(int i, int j) {a=i, b=j;}
        void showab();
};
void myclass::showab(){
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}

int main(int argc, char* argv[]){

    myclass obj1, obj2;

    obj1.setab(10, 20);
    obj2.setab(0, 0);

    obj2 = obj1; // assignment obj1 to obj2

    cout << obj2.a << " " << obj2.b << endl;

    return 0;
}

