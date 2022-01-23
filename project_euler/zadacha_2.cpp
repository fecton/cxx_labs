#include <iostream>

unsigned long long int* fib(unsigned long long int* arr){
    int tmp=arr[0];
    arr[0] = arr[1];
    arr[1] = tmp+arr[1];
    return arr;
}

int main(int argc, char const *argv[])
{
    using namespace std;
    int N;
    cout << "Enter N: ";
    cin >> N;
    cout << endl;
    unsigned long long int fib_array[2] = {0,1}, sum=0;

    for(int i=0;i<N+1;i++){
        cout << fib_array[0] << endl;
        if(fib_array[0]%2==0) sum += fib_array[0];
        fib(fib_array);
        if(fib_array[0] > 4000000){
            cout << endl << "[!] You're reached maximum!" << endl;
            break;
        }
    }
    cout << "The sum: " << sum << endl;

    return 0;
}

