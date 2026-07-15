#include <bits/stdc++.h>
using namespace std;

void pattern16(int n)
{
    char l = 'A';
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j <= i; j++)
        {
            cout << l << " ";
        }
        l++;
        cout << endl;
    }
}

int main() {
pattern16(5);
return 0;
}