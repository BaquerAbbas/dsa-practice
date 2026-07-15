#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> Prices = {7, 6, 4, 3, 1};
    int profit = 0, maxProfit = 0, minPrice = Prices[0];
    for (int i = 1; i < Prices.size(); i++)
    {
        if (minPrice > Prices[i])
        {
            minPrice = Prices[i];
        }
        profit = Prices[i] - minPrice;
        if (profit > maxProfit)
        {
            maxProfit = profit;
        }
    }

    cout << maxProfit;
}
