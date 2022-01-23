#include <iostream>
#include <fstream>

int main(int argc, char* argv[]){
    using namespace std;

    cout << "[?] Required free space: 944 MB" << endl;
    cout << endl << "[+] Started writing..." << endl;

    ofstream password_file("passwords.txt");

    for(int i=0;i<10000000;i++){
        for(int j=1;j<10;j++){
            password_file << 100000000*j+i << "\n";
        }
    }
    password_file.close();

    cout << "[+] Finished successfully!" << endl;

    return 0;
}

