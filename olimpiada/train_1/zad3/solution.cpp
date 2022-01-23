#include <iostream>
#include <string>

using namespace std;


int main(int argc, char const* argv[])
{    

    // входные данные
    string password;
    string answer = "";
    char no_pow[10] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
    char pow_3[10] = { '0', '1', '8', '7', '4', '5', '6', '3', '2', '9' };
    cin >> password;

    for (unsigned int i = 0; i < password.length(); ++i) {
        for (unsigned int j = 0; j < 10; ++j) {
            if (password[i] == pow_3[j]) {
                answer += no_pow[j];
                break;
            }
        }
    }
   
    cout << answer << endl;

    return 0;
}