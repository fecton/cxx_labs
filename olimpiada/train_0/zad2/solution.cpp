#include <iostream>

int main(int argc, char const *argv[])
{
    using namespace std;
    short F=0,D=0;

    cin >> F;
    cin >> D;
    
    printf("%d'%d\" = %.2fm.\n", F, D, ((float(F)*12+D)*25.4)/1000);

    return 0;
}