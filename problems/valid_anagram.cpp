#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<char, int> freq;
    string one = "mohdf";
    string two = "dhom";

    if(one.size()!=two.size()) {
        cout << "Not anagram!";
        return 0;
    }
    for (int i = 0; i < one.size(); i++)
    {
        freq[one[i]]++;
    }

    for (int i = 0; i < one.size(); i++)
    {
        freq[two[i]]--;
    }

    for (auto &pair : freq)
    {
        if (pair.second != 0)
        {
            cout << "The Strings are not anagram!";
            return 0;
        }
    }

    cout << "The strings are anagram!";
    return 0;
}