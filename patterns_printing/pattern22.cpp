#include <bits/stdc++.h>
using namespace std;


void pattern22(int n) {
    for(int i=0; i<(n*2)-1; i++) {
        for(int j=0; j<(n*2)-1; j++) {
            int top = i;
            int left = j;
            int right = ((n*2)-2) - j;
            int bottom = ((n*2)-2) - i;
            int pos = min(min(top, left), min(right, bottom));
            cout << n- pos<<" ";
        } cout << endl;
    }
 }

 int main() {
    pattern22(4);
    return 0;
 }