#include <bits/stdc++.h>
using namespace std;

void pattern7(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < (2 * i + 1); k++)
        {
            cout << "*";
        }
        for (int o = 0; o < n - i - 1; o++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

int main() {
    pattern7(5);
    return 0;
}