#include <iostream>


int main(int argc, char const *argv[])
{
    using namespace std;

    int N=0;

    cin >> N;

    if(N%2==0 && N>=0){
        cout << "YES" << endl << N+2 << endl;
    }
    else {
        cout << "NO" << endl;
        if(N<0){
            cout << 2 << endl;
        }
        else if(N%2!=0){
            cout << N+1 << endl;
        }
    }

    return 0;
}