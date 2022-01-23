#include <iostream>
#include <string>
#include <algorithm>

int encrypt(int input_number) {
	using namespace std;

	unsigned int output_number;

	// основный алгоритм

	unsigned int n1, n2, n3, n4;

	// получаем каждое число
	n1 = (input_number - input_number % 1000);
	n2 = (input_number - input_number % 100 - n1);
	n3 = (input_number - input_number % 10 - n1 - n2);
	n4 = (input_number - n1 - n2 - n3);

	n1 /= 1000;
	n2 /= 100;
	n3 /= 10;

	unsigned int n1_n2, n2_n3, n3_n4;

	n1_n2 = (n1 * 100 + (n1 + n2) % 10 * 10 + n2) * 10000;
	n2_n3 = ((n2 + n3) % 10 * 10 + n3) * 100;
	n3_n4 = ((n3 + n4) % 10 * 10 + n4);

	output_number = (n1_n2 + n2_n3 + n3_n4);

	return output_number;
}

std::string get_mod(std::string number) {
	using namespace std;

	string reversed_string = number;
	string string_to_return = "";

	reverse(reversed_string.begin(), reversed_string.end());
	
	for (int i = 0; i < reversed_string.length(); ++i) {
		if (i % 2 == 0) {
			string_to_return += reversed_string[i];
		}
	}
	reverse(string_to_return.begin(), string_to_return.end());
	return string_to_return;
}

bool check(std::string number) {
	using namespace std;
	string string_to_check = get_mod(number);
	//string output_string = "";

	string output_string = to_string(encrypt(stoi(string_to_check)));


	if (number == output_string) {
		return true;
	}
	return false;
}

int main(int argc, const char* argv[]) {
	using namespace std;
	// входные данные
	int element[4] = { 0, };
	for (int i = 0; i < 4; ++i) {
		cin >> element[i];
	}

	//element[0] = 55665708;
	//element[1] = 29348432;
	//element[2] = 216877836;
	//element[3] = 415757538;


	// основной алгоритм
	string part="", result="";
	for (int i = 0; i < 4; ++i) {
		if (element[i]%42==0) {
			part = to_string(element[i] / 42);
			
			if (check(part)) {
				result += get_mod(part) + " ";
			}
			else {
				result += "???? ";
			}
		}
		else {
			result += "???? ";
		}
	}
	cout << result;

	return 0;
}