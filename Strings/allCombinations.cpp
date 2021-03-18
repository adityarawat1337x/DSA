#include <bits/stdc++.h>

using namespace std;

void permu(string s, int l, int r)
{
    if (l == r)
    {
        cout << s << endl;
    }
    else
    {
        for (int i = l; i <= r; i++)
        {
            swap(s[i], s[l]);
            permu(s, l + 1, r);
            swap(s[l], s[i]);
        }
    }
}

void comb(string s, int index, int l)
{
    static string suffix = "";
    if (s.length() == 0)
    {
        suffix = "";
        return;
    }
    suffix += s[index];
    if (suffix.length() != 1)
        permu(suffix, 0, suffix.length() - 1);
    else
        cout << suffix << endl;
    string p = s;
    p.erase(index, 1);
    comb(p, 0, l);
}

int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
        comb(s, i, s.length());
    return 0;
}