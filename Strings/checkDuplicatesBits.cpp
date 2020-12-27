#include <iostream>

using namespace std;
void checkDup(string s)
{
    long int hash = 0, temp = 0;
    for (int i = 0; i < s.length(); i++)
    {
        temp = 1;
        temp = temp << s[i] - 97;
        if (temp & hash)
        {
            cout << "\nDuplicate: " << s[i];
        }
        else
            hash = temp | hash;
    }
}

int main()
{
    string s;
    cin >> s;
    checkDup(s);
    return 0;
}