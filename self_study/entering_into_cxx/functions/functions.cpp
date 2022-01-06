#include <iostream>

int maxPositive(int *array, int size){
    int max = 0;
    for(int i=0;i<size;++i)
        if(max < array[i]) 
            max = array[i];
    return max;
}

std::string formatDataTime(){
    return "[15:00:00 01-01-2001] ";
}

int main(int argc, char* argv[]){
    std::cout << formatDataTime() << "Hello, World!" << std::endl;

    const int length = 10;
    int array[length] = {0,1,2,3,4,5,6,7,8,9};

    // find max value
    int max = maxPositive(array, length);

    std::cout << formatDataTime() << "max: " << max << std::endl;

    const int lengthToo = 5;
    int arrayToo[lengthToo] = {0,1,2,3,4};
    // find max element
    int maxToo = maxPositive(arrayToo, lengthToo);
    std::cout << formatDataTime() << "max: " << maxToo << std::endl;

    return 0;
}
