#include <iostream>


int main(int argc, char const* argv[])
{
    using namespace std;

    // стоимость пирожка (грн, коп)
    unsigned int A = 0, B = 0, piroshok_cents;
    cin >> A >> B;
    piroshok_cents = A * 100 + B;

    // стоимость булки с маком (грн, коп)
    unsigned int C = 0, D = 0, bulka_with_mak_cents;
    cin >> C >> D;
    bulka_with_mak_cents = C * 100 + D;

    // деньги девочки (грн.)
    unsigned int S = 0, sum_cents;
    cin >> S;
    sum_cents = S * 100;

    unsigned int piroshok_count, bulka_count, tea_count;
    piroshok_count = bulka_count = tea_count = 0;

    // максимальна кількість наборів "пирожок + булочка" за каждый набор получает стакан чая
    piroshok_count += bulka_count += tea_count += (sum_cents / (piroshok_cents + bulka_with_mak_cents));
    sum_cents %= (piroshok_cents + bulka_with_mak_cents);

    // максимальное количество пирожков
    piroshok_count += sum_cents / piroshok_cents;
    sum_cents %= piroshok_cents;

    // максимальное количество булок с маком
    bulka_count += sum_cents / bulka_with_mak_cents;
    sum_cents %= bulka_with_mak_cents;

    // купит чай что стоит 50 коп за стакан
    tea_count += sum_cents / 50;

    cout << piroshok_count << " " << bulka_count << " " << tea_count << endl;

    return 0;
}