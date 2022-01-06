#include <iostream>
// #include <iso646.h>
int main(int argc, char* argv[]){
    bool condition = true;
    bool badCase = false;
    bool convention = 1;
    bool convention2 = 0;
    bool convention3 = 0.12345;

    bool andResult = condition && badCase;
    bool orResult = condition || badCase;

    bool andResult2 = condition and badCase;
    bool orResult2 = condition or badCase;

    return 0;
}
