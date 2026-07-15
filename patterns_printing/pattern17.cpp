#include <bits/stdc++.h>
using namespace std;

void pattern17(int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (n - i - 1); j++)
        {
            cout << "-";
        }
        char l = 'A';
        for (int j = 0; j < (i * 2) + 1; j++)
        {
            cout << l;
            if (j > i - 1)
            {
                l--;
            }
            else
            {
                l++;
            }
        }
        for (int j = 0; j < (n - i - 1); j++)
        {
            cout << "-";
        }
        cout << endl;
    }
}

int main() {
    pattern17(5);
}