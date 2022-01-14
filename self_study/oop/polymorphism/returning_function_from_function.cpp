#include <iostream>
#include <cstring>
using namespace std;

class sample{
    char s[80];
    public:
        void show() { cout << s << endl; }
        void set(char *str) { strcpy(s, str); }
};

sample input(){
    char instr[80];
    sample str;
    cout << "Enter the string: ";
    cin >> instr;
    str.set(instr);
    return str;
}

int main(int argc, char const *argv[])
{

    sample obj1 = input();

    obj1.show();

    return 0;
}

