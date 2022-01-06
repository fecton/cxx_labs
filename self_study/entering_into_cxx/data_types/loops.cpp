#include <iostream>
#include <string>

int main(int argc, char* argv[]){

    char str_array[] = {'A','d','a','m'};
    char str_length = 4;

    for(int i=0;i<str_length;++i){
        std::cout << str_array[i];
    }
    std::cout << std::endl;

    short arr[30];

    for(int i=0;i<30;++i){
        arr[i] = 2^i;
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    int summ=0, i=0;

    while(arr[i] < 4096){
        summ += arr[i];
        i++;
    }
    std::cout << "The sum is " << summ << std::endl;

    i=0;
    do{
        std::cout << "Here is do while: " << i << std::endl;
        i++;
    }while(i<str_length);


    return 0;
}



