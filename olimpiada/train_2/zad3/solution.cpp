#include <iostream>

using namespace std;

int main(int argc, const char* argv[]) {

	unsigned int start_number, end_number;
	cin >> start_number;
	cin >> end_number;

	while (start_number > end_number) {
		if (start_number % 2 == 0) {
			if (start_number - 1 == end_number) {
				start_number -= 1;
				cout << "-1" << endl;
			}
			else {
				if (start_number / 2 < end_number) {
					start_number -= 1;
					cout << "-1" << endl;
				}
				else {
					start_number /= 2;
					cout << ":2" << endl;
				}
			}
		}
		else {
			start_number -= 1;
			cout << "-1" << endl;
		}
		//cout << "!!!" << start_number << endl;
	}

	return 0;
}