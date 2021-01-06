#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int v[]{1, 2, 3, 4, 5};
    int *p{v};
    for (auto ele : *p)
    {
        cout << ele << endl;
    }
}