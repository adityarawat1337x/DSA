#include <iostream>

using namespace std;
void permu(string s, int l, int r)
{   
    if (l == r)
    {
        cout << "\n"
             << s;
    }
    else
    {
        for (int i = l; i <= r; i++)
        {   
            cout<<s[l]
            swap(s[i], s[l]);
            permu(s, l + 1, r);
            swap(s[l], s[i]);
        }
    }
}
int main()
{
    string s;
    cin >> s;
    permu(s, 0, s.length() - 1);
    return 0;
}
