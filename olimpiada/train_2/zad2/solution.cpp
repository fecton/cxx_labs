#include <iostream>
#include <cmath>

int main(int argc, const char* argv[]) {
	using namespace std;

	// входные данные
	int input_number;
	cin >> input_number;

	// основной алгоритм

	int answer=0;

	answer = input_number / 7;
	answer -= 27;

	if ((input_number % 7 == 0) && (answer % 3 == 0)) {

		answer /= 3;
		cout << answer << endl;
	}
	else {
		cout << "Error" << endl;
	}

	return 0;
}