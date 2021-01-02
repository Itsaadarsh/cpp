#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> sno(2);
    sno[1] = 1;
    for (int i = 0; i < 2; i++)
    {
        cout << sno[i] << endl;
    }
    return 0;
}