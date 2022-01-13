#include <iostream>
#include <fstream>

int main(int argc, char* argv[]){

    std::cout << "Started writing..." << std::endl;

    std::ofstream password_file("passwords.txt");

    for(int i=0;i<10000000;i++){
        for(int j=1;j<10;j++){
            password_file << 100000000*j+i << "\n";
        }
    }
    password_file.close();

    std::cout << "[+] Finished successfully!" << std::endl;

    return 0;
}

