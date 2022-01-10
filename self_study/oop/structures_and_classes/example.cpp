#include <iostream>

void print_array(char* array){
    for(int i=0;i<40;i++){
        std::cout << array[i];
    }
    std::cout << std::endl;
}

// just structure
struct inv_type{
    char item[40]; // item name
    double cost; // item cost
    double retail; // item retail cost
    int on_hand; // item count
    int lead_time; // time to lead
} inv_varA, inv_varB, inv_varC, invtry[100]; // structure variables

int main(int argc, char* argv[]){
    std::cout << inv_varA.cost << std::endl;
    std::cout << invtry[2].on_hand;

    gets(inv_varA.item);
    print_array(inv_varA.item);

    return 0;
}



