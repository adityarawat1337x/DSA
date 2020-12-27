#include <iostream>

using namespace std;

int pow(int m, int n)
{
    if (n == 0)
        return 1;
    else
        return m * pow(m, n - 1);
}

int POW(int m, int n)
{
    if (n == 0)
        return 1;
    else
    {
        if (n % 2 == 0)
            return POW(m * m, n / 2);
        else
            return m * POW(m * m, (n - 1) / 2);
    }
}

int main()
{
    int x, y;
    cin >> x >> y;
    cout << pow(x, y) << endl
         << POW(x, y);
    return 0;
}