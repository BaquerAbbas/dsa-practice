#include <bits/stdc++.h>
using namespace std;

void pattern15(int n){
    for (int i = 0; i < n; i++)
    {
        char l = 'A';
        for (int j = 0; j < n - i; j++)
        {
            cout << l << " ";
            l++;
        }
        cout << endl;
    }
}

int main() {
    pattern15(5);
    return 0;
}