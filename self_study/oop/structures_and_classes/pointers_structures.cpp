#include <iostream>

struct bal{
    float balance;
    char name[80];
} person;

int main(int argc, char* argv[]){
    person.balance = 3432.34f;
    bal *p;
    p = &person;
    std::cout << p -> balance << std::endl;

    return 0;
}