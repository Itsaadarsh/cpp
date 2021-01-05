#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> prices;
    if (prices.empty() || prices.size() < 2)
    {
        return 0;
    }
    int maxPrice{0}, minPrice{prices.at(0)};
    for (size_t i = 1; i < prices.size(); i++)
    {
        if (prices.at(i) > prices.at(i - 1))
        {
            maxPrice = max(maxPrice, prices.at(i) - minPrice);
        }
        else
        {
            minPrice = min(minPrice, prices.at(i));
        }
    }
    return maxPrice;
}