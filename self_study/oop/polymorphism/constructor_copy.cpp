#include <iostream>
using namespace std;

class constructor_copy{
    int a,b;

}

constructor_copy (const constructor_copy &obj){
    cout << "That's a copy contructor" << endl;
}

// i do not how does it work :D
int main(int argc, char const *argv[])
{
    
    return 0;
}

