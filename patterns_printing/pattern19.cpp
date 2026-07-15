#include <bits/stdc++.h>
using namespace std;

void pattern19(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (n - i); j++)
        {
            cout << "*";
        }
        for (int j = 0; j < (i * 2); j++)
        {
            cout << "-";
        }
        for (int j = 0; j < (n - i); j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < (n - i - 1) * 2; j++)
        {
            cout << "-";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
 pattern19(5);
}
