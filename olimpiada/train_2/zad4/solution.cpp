#include <iostream>

using namespace std;

int main(int argc, const char* argv[]) {
	// входные данные
	int start_number, end_number;
	cin >> start_number >> end_number;

	// основной алгоритм
	unsigned int massive[50000] = {0, };
	unsigned int total_count = 1, massive_pointer = 0;

	for (unsigned int i = 0; i < 80; ++i) {
		for (unsigned int j = 0; j < 10; ++j) {
			for (unsigned int k = 0; k < total_count; ++k) {
				massive[massive_pointer] = j;
				massive_pointer++;
			}
		}
		total_count++;
	}

	unsigned int total_sum = 0;

	for (unsigned int i = start_number-1; i < end_number; ++i) {
		total_sum += massive[i];
	}

	cout << total_sum << endl;

	// выходные данные

	return 0;
}