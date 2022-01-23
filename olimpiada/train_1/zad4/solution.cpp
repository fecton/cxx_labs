#include <iostream>
#include <cmath>
using namespace std;


int main(int argc, char const* argv[])
{
	// три зайца и количество ходов
	unsigned short A, B, C;
	unsigned short step_count = 0;

	cin >> A >> B >> C;

	// временная переменная
	unsigned short tmp;

	// основной алгоритм


	while (true) {
		//cout << A << " " << B << " " << C << endl;
		// выход из цикла (A B C)
		if ((B - A - 1) == 0 and (C - B - 1) == 0) {
			break;
		}
		// если правая сторона больше (A B C) (B-A > C-B)
		else if (B - A < C - B) {
			tmp = round((B + C) / 2);
			A = B;
			B = tmp;
			step_count++;
		}
		// если левая сторона больше (A B C) (B-A < C-B)
		else if (B - A >= C - B) {
			tmp = round((A + B) / 2);
			C = B;
			B = tmp;
			step_count++;
		}
	}


	// вывод результата
	cout << step_count << endl;

	return 0;
}
