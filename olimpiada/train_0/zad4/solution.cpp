#include <iostream>

int max(int a, int b){
    if(a>b) return a;
    return b;
}

int min(int a, int b){
    if(a>b) return b;
    return a;
}

int main(int argc, char const *argv[])
{
    using namespace std;

    short A,B,C;
    A=B=C=0;

    // input numbers
    cin >> A >> B >> C;

    short max_number = max( max(A,B), max(B,C) ), 
    min_number = min( min(A,B), min(B,C) );

    cout << max_number*max_number << endl << min_number*min_number << endl;

    return 0;
}