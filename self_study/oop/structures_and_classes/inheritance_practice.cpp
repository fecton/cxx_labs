#include <iostream>

using namespace std;

class Device{
    public:
        int serial_number = 12345678;

        void turn_on(){
            cout << "Device is on" << endl;
        }
};

class Computer: private Device{
    public:
        void say_hello(){
            turn_on();
            cout << "Welcome to Windows 95!" << endl;
        }
};


int main(int argc, char const *argv[])
{
    Device device_instance;
    Computer computer_instance;

    cout << "\t Device " << endl;
    cout << "Serial number is: " << device_instance.serial_number << endl;

    device_instance.turn_on();

    cout << "\t Computer" << endl;
    cout << "Serial number is: " << computer_instance.serial_number << endl;
    computer_instance.say_hello();



    return 0;
}


