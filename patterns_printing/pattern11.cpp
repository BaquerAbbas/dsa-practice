#include <bits/stdc++.h>
using namespace std;

void pattern11(int n)
{
    int start = 7;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            start = 1;
        else
            start = 0;
        for (int j = 0; j <= i; j++)
        {
            cout << start << " ";
            start = 1 - start;
        }
        cout << endl;
    }
}

int main() {
    pattern11(5);
return 0;
}