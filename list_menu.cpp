#include <iostream>
#include <vector>
using namespace std;

void p_func(const vector<int> &ele)
{
    if (ele.size() == 0)
    {
        cout << "List is empty" << endl;
    }
    else
    {
        for (size_t i = 0; i < ele.size(); i++)
        {
            cout << "Element " << i << " in list is " << ele[i] << endl;
        }
    }
}

int main()
{
    char ip{};
    vector<int> list;
    while (ip != 'q')
    {
        cout << "\nP - Print Number \nA - Add a number\nM - Display mean of the list\nS - Display the smallest number\nL - Display the largest number \nQ - Quit" << endl;
        cout << "\nEnter the input command => ";
        cin >> ip;

        if (ip == 'P' || ip == 'p')
        {
            p_func(list);
        }

        if (ip == 'A' || ip == 'a')
        {
            cout << "\nEnter the number you wanna add => ";
            int insert_number;
            cin >> insert_number;
            list.push_back(insert_number);
            cout << "\n"
                 << insert_number << " Added to the list.\n";
        }

        if (ip == 'M' || ip == 'm')
        {
            int list_mean = 0;
            for (auto ele : list)
            {
                list_mean += ele;
            }
            cout << "\nThe MEAN of the list is " << static_cast<double>(list_mean) / list.size() << endl;
        }

        if (ip == 'S' || ip == 's')
        {
            int smallest_num = list.at(0);
            for (int num : list)
            {
                if (num < smallest_num)
                {
                    smallest_num = num;
                }
            }
            cout << "\nThe SMALLEST element in the list is " << smallest_num << endl;
        }

        if (ip == 'L' || ip == 'l')
        {
            int largest_num = list.at(0);
            for (int num : list)
            {
                if (num > largest_num)
                {
                    largest_num = num;
                }
            }
            cout << "\nThe LARGEST element in the list is " << largest_num << endl;
        }
    }

    return 0;
}