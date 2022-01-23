#include <iostream>

using namespace std;

bool is_in_array(int number, unsigned short* array, const int size) {
	for (unsigned short i = 0; i < size; ++i) {
		if (number == array[i]) return true;
	}
	return false;
}

int main(int argc, const char* argv) {
	// переменные для ввода
	unsigned short N, oksana_marks[100] = { 0, };
	unsigned short M, maksim_marks[100] = { 0, };

	// переменные для вывода
	unsigned short oksana_doesnt_have[50] = { 0, }, okasana_DH_count = 0;
	unsigned short maksim_doesnt_have[50] = { 0, }, maksim_DH_count = 0;

	// вводим данные
	// оксана
	cin >> N;
	for (unsigned short i = 0; i < N; ++i) cin >> oksana_marks[i];

	// максим
	cin >> M;
	for (unsigned short i = 0; i < M; ++i) cin >> maksim_marks[i];


	// основной алгоритм

	for (unsigned short j = 0; j < M; ++j) {
		if (not is_in_array(maksim_marks[j], oksana_marks, N)) {
			oksana_doesnt_have[okasana_DH_count] = maksim_marks[j];
			okasana_DH_count++;
		}
	}

	for (unsigned short i = 0; i < N; ++i) {
		if (not is_in_array(oksana_marks[i], maksim_marks, M)) {
			maksim_doesnt_have[maksim_DH_count] = oksana_marks[i];
			maksim_DH_count++;
		}
	}


	// вывод
	for (unsigned short i = 0; i < okasana_DH_count; ++i) cout << oksana_doesnt_have[i] << " ";
	cout << endl;
	for (unsigned short i = 0; i < maksim_DH_count; ++i) cout << maksim_doesnt_have[i] << " ";
	cout << endl;

	return 0;
}