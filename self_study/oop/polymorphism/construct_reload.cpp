#include <iostream>
#include <ctime>
using namespace std;

class timer{
    int seconds;
    public:
        timer(char*t) {seconds=atoi(t);}
        timer(int t) {seconds=t;}
        timer(int min, int sec) {seconds=min*60+sec;}
        void run();
};

void timer::run(){
    clock_t t1;
    t1 = clock();
    while( (clock()/CLOCKS_PER_SEC - t1/CLOCKS_PER_SEC)<seconds );
    cout << "\a";
}

int main(int argc, char const *argv[])
{
    timer a(10), b("20"), c(1,10);
    a.run();
    b.run();
    c.run();

    return 0;
}
