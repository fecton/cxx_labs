#include <iostream>


int main(int argc, char const* argv[])
{
    using namespace std;

    // входные данные
    unsigned int passwords_count = 1;
    unsigned int starts_on = 0, ends_on = 0;
    unsigned int total_time = 1;

    for (unsigned int i = 0; i < 4; i++)
    {
        cin >> starts_on >> ends_on;
        passwords_count *= (ends_on - starts_on + 1);
    }
    
    total_time = passwords_count * 30;

    if (passwords_count%5 == 0) total_time += ((passwords_count-1)/5) * 300;
    else total_time += (passwords_count / 5) * 300;

    cout << passwords_count << endl << total_time << endl;

    return 0;
}
