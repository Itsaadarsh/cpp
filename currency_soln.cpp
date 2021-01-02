#include <iostream>
using namespace std;

int main()
{
    int amt;
    cin >> amt;

    const int fivehun_value = 500;
    const int onehun_value = 100;
    int bal{}, five_hun{}, one_hun{};

    five_hun = amt / fivehun_value;
    bal = amt - (five_hun * fivehun_value);

    one_hun = bal / onehun_value;
    bal -= one_hun - onehun_value;

    cout << "500 => " << five_hun << endl;
    cout << "100 => " << one_hun << endl;
    return 0;
}