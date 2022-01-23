// Если выписать все натуральные числа меньше 10, кратные 3 или 5, то получим 3, 5, 6 и 9. 
// Сумма этих чисел равна 23.

// Найдите сумму всех чисел меньше 1000, кратных 3 или 5.

#include <iostream>
#include <ctime>
#include <limits>
int main(int argc, char const *argv[])
{
    using namespace std;

    unsigned int start_time = clock();

    int N=4294967295/4;

    cout << "Enter N: ";
    cin >> N;
    cout << endl;

    unsigned long long int sum=0;

    for(int i=0;i<N;i++){
        if(i%3==0 or i%5==0){
            sum += i;
        }

        if(i%3==0){
            i+=1;
        }
    }

    cout << "Sum: " << sum << endl;
    cout << endl << "Runtime: " << clock()-start_time << endl;

    return 0;
}



