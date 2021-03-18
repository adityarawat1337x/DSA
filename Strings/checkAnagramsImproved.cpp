#include <iostream>
#include <vector>
using namespace std;

void findNumOfAnagrams(string s, string p)
{
    int hash[128] = {0};
    vector<int> ans;
    int left = 0, right = 0, count = p.length();

    for (int i = left; i < p.length(); i++)
    {
        hash[p[i]]++;
    }

    while (right < s.length())
    {
        if (hash[s[right++]]-- >= 1)
            count--;
        if (count == 0)
            ans.push_back(left);
        if (right - left == p.length() && hash[s[left++]]++ >= 0)
            count++;
    }

    for (int i : ans)
    {
        cout << i;
    };
}
int main()
{
    string s, p;
    cout << "S";
    cin >> s;
    cout << "P";
    cin >> p;
    findNumOfAnagrams(s, p);
    return 0;
}