// class class_name{
//     code ...
//     public:
//         friend void friend_func(class_name obj1);
//     code ...
// };

#include <iostream>
using namespace std;

class myclass{
    int a,b;
    public:
        myclass(int i, int j){ a=i; b=j; }
        friend int sum(myclass x);
};

int sum(myclass x){
    return x.a + x.b;
}




class C2;

class C1{
    int status;
    public:
        void set_status(int state);
        friend int idle(C1 a, C2 b);
};

class C2{
    int status;
    public:
        void set_status(int state);
        friend int idle(C1 a, C2 b);
};

void C1::set_status(int state){
    status = state;
}
void C2::set_status(int state){
    status = state;
}
int idle(C1 a, C2 b){
    if(a.status || b.status) return 0;
    else                     return 1;
}


int main(int argc, char const *argv[])
{
    myclass n(3,4);
    cout << sum(n) << endl << endl;


    const int IDLE=0;
    const int INUSE=1;

    C1 x;
    C2 y;
    x.set_status(IDLE);
    y.set_status(IDLE);
    if(idle(x,y)) cout << "The screen is free!" << endl;
    else          cout << "The message was showed!" << endl;
    
    x.set_status(INUSE);
    if(idle(x,y)) cout << "The screen is free!" << endl;
    else          cout << "The message was showed!" << endl;


    return 0;
}


