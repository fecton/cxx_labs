#include <iostream>

int main(int argc, char const *argv[])
{
    using namespace std;

    unsigned short A=0, B=0; // pen cost (dollar, cent)
    unsigned int C=0;   // money count (dollar)
    unsigned short D=0; // money count (cent)

    // input pen cost
    cin >> A >> B;

    // input money count
    cin >> C >> D;


    unsigned int total_pen_cost = A*100 + B;
    unsigned int total_cents_to_buy = C*100 + D;

    unsigned int pen_count = total_cents_to_buy/total_pen_cost;
    unsigned int cents_last = total_cents_to_buy%total_pen_cost;

    unsigned int dollars_last = cents_last/100;
    cents_last -= dollars_last*100;

    cout << pen_count << endl;
    cout << dollars_last << " " << cents_last << endl;


    return 0;
}