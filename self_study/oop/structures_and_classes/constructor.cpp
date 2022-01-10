#include <iostream>
using namespace std;

class queue{
    int q[100];
    int sloc, rloc;
    public:
        queue();
        void qput(int i);
        int qget();
};

queue::queue(){
    sloc = rloc = 0;
    cout << "Order was initialized!" << endl;
}

int main(int argc, char* argv[]){
    queue obj1;


    return 0;
}



