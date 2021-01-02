#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v1;
    vector<int> v2;

    cout << "----------V1-------------" << endl;
    v1.push_back(10);
    v1.push_back(20);

    for (int i = 0; i < 2; i++)
    {
        cout << v1.at(i) << endl;
    }

    cout << v1.size() << endl;

    cout << "----------V2-------------" << endl;
    v2.push_back(100);
    v2.push_back(200);

    for (int j = 0; j < 2; j++)
    {
        cout << v2.at(j) << endl;
    }

    cout << v2.size() << endl;

    cout << "----------V_2D-------------" << endl;
    vector<vector<int>> v_2d;
    v_2d.push_back(v1);
    v_2d.push_back(v2);

    for (int k = 0; k < 2; k++)
    {
        for (int a = 0; a < 2; a++)
        {
            cout << "At (" << k << "," << a << ") = " << v_2d.at(k).at(a) << endl;
        }
    }

    v1.at(0) = 1000;
    cout << "----------V_2D AGAIN-------------" << endl;
    for (int s = 0; s < 2; s++)
    {
        for (int d = 0; d < 2; d++)
        {
            cout << "At (" << s << "," << d << ") = " << v_2d.at(s).at(d) << endl;
        }
    }
    cout << "----------V1 AGAIN-------------" << endl;
    for (int f = 0; f < 2; f++)
    {
        cout << v1.at(f) << endl;
    }

    return 0;
}