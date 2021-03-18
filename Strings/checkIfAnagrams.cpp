#include <iostream>

using namespace std;

bool checkAnagrams(string s1, string s2)
{
    if (s1.length() != s2.length())
        return 0;
    int hash[128] = {0};
    for (int i = 0; i < s1.length(); i++)
    {
        hash[s1[i]]++;
    }
    for (int i = 0; i < s2.length(); i++)
    {
        hash[s2[i]]--;
    }
    for (int i = 0; i < sizeof(hash) / sizeof(hash[0]); i++)
    {
        if (hash[i] != 0)
            return 0;
    }
    return 1;
}

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    cout << checkAnagrams(s1, s2);
    return 0;
}