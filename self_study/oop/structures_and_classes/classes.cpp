#include <iostream>

class klass{
    private:
        int k[100];
    
    public:
        int sloc, rloc;
        void init();
        void kput(int i);
        int kget();
};

void klass::init(){
    std::cout << "Object was created!" << std::endl;
}

void klass::kput(int i){
    if(sloc==100){
        std::cout << "Order is full" << std::endl;
        return;
    }
    sloc++;
    k[sloc] = i;
}

int klass::kget(){
    std::cout << "Returned my favorite number: 43" << std::endl;
    return 43;
}

using namespace std;

class myclass{
    int a;
    public:
        int b;
        void setab(int i);
        int geta();
        void reset();
};

void myclass::setab(int i){
    a = i;
    b = i*i;
}

int myclass::geta(){
    return a;
}

void myclass::reset(){
    setab(0);
}


int main(int argc, char* argv[]){
    // class "klass"
    klass obj1, obj2;
    obj1.init();
    obj2.init();

    std::cout << obj1.sloc << std::endl;
    std::cout << "=============" << std::endl;


    // class "myclass"
    myclass obj;
    obj.setab(5);
    cout << "Object obj after calling function setab(5): "
         << obj.geta() << " " << obj.b << endl;

    obj.b = 20;

    cout << "Object obj after set b=20 : "
         << obj.geta() << " " << obj.b << endl;

    obj.reset();

    cout << "Object obj after reset: "
         << obj.geta() << " " << obj.b << endl;

    return 0;
}


