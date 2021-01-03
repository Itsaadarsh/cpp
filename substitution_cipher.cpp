#include <iostream>
#include <string>
using namespace std;

int main()
{
    string ip;
    string output_string;
    string aplhabets{"abcdefghijklmnopqrstuvwxyz "};
    string key{"ZYXWVUTSRQPONMLKJIHGFEDCBA@"};
    cout << ip;
    getline(cin, ip);
    for (auto ele : ip)
    {
        ele = tolower(ele);
        size_t found_index = aplhabets.find(ele);
        size_t found_alphabet = key.at(found_index);
        output_string.push_back(found_alphabet);
    }
    cout << "Input string => " << ip << endl;
    cout << "Encrypted string => " << output_string << endl;

    return 0;
}
