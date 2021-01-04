#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    while (num != 1)
    {
        if (num == 0)
        {
            return false;
        }
        else if (num % 2 == 0)
        {
            num = num / 2;
        }
        else if (num % 3 == 0)
        {
            num = num / 3;
        }
        else if (num % 5 == 0)
        {
            num = num / 5;
        }
        else
        {
            num = 1;
            return false;
        }
    }
    return true;
}