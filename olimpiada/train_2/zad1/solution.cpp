#include <iostream>
#include <ios>


int main(int argc, const char* argv[]) {
	using namespace std;
	
	// оптимизация
	ios_base::sync_with_stdio(false);

	// входящие данные
	unsigned short input_number;
	cin >> input_number;
	
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

	// input: 1289
	// n1 = 1
	// n2 = 2
	// n3 = 8
	// n4 = 9

	// получаем значения после вычислений
	unsigned int n1_n2, n2_n3, n3_n4;
	
	n1_n2 = (n1 * 100 + (n1 + n2) % 10 * 10 + n2) * 10000;
	n2_n3 = ((n2 + n3) % 10 * 10 + n3) * 100;
	n3_n4 = ((n3 + n4) % 10 * 10 + n4);

	output_number = (n1_n2 + n2_n3 + n3_n4) * 42;


	// вывод результата
	cout << output_number << endl;

	return 0;
}