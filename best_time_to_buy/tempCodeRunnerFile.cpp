
int main()
{
    vector<int> Prices = {8, 7, 6, 5, 4};
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
