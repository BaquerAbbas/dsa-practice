#include <bits/stdc++.h>
using namespace std;

void pattern12(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << j + 1;
        }
        for (int j = 0; j < (n - i) * 2 - 2; j++)
        {
            cout << " ";
        }
        for (int j = i + 1; j > 0; j--)
        {
            cout << j;
        }

        cout << endl;
    }
}

int main() {
pattern12(4);
return 0;
}