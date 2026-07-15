#include <bits/stdc++.h>
using namespace std;

void pattern1(int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < x; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    pattern1(4,4);
    return 0;
}