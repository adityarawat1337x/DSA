#include <iostream>
#include <vector>
using namespace std;

bool checkHash(int l, int r, string s, int hash[])
{
    int count = r - l + 1;
    for (int i = l; i <= r; i++)
    {
        if (hash[s[i]]-- >= 1)
        {
            count--;
        }
    }

    for (int i = l; i <= r; i++)
    {
        hash[s[i]]++;
    }

    if (count == 0)
        return 1;
    else
        return 0;
}

void findNumOfAnagrams(string s, string p)
{
    int hash[128] = {0};
    vector<int> ans;
    int left = 0, right = p.length() - 1;

    for (int i = left; i <= right; i++)
    {
        hash[p[i]]++;
    }

    while (right < s.length())
    {
        if (checkHash(left, right, s, hash))
        {
            ans.push_back(left);
        }
        left++;
        right++;
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