#include <iostream>

void noParamsNoReturn(){
    std::cout << "Hello from noParamsNoReturn!" << std::endl;
}

void paramsNoReturn(int arg1, float arg2, char* arg3){
    std::cout << "Hello from paramsNoReturn! Args:\n"
        << "arg1: " << arg1
        << "arg2: " << arg2
        << "arg3: " << arg3
        << std::endl;
}

int noParamsReturn(){
    std::cout << "Hello from noParamsReturn!" << std::endl;
    return 42;
}

int paramsReturn(int arg1, int arg2){
    std::cout << "Hello from paramsReturn!" << std::endl;
    return arg1 + arg2;
}

int inOutParams(int& value){
    // int& means link to value (currently to inOut)
    value = 156;
    return 3;
}

int main(int argc, char* argv[]){

    noParamsNoReturn();
    paramsNoReturn(5, 5.0f, "Hello world!");

    int resultValue = noParamsReturn();
 
    // not an error
    noParamsReturn();

    int inOut = 42;
    std::cout << "before inOut = " << inOut << std::endl;
    inOutParams(inOut);
    std::cout << "after inOut = " << inOut << std::endl;

    return 0;
}
