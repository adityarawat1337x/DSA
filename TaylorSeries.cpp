#include <iostream>

using namespace std;

int fact(int x)
{
    if (x == 0)
        return 1;
    else
        return x * fact(x - 1);
}

int pow(int m, int n)
{
    if (n == 0)
        return 1;
    else
        return m * pow(m, n - 1);
}

double taylor(int x, int n)
{
    if (n == 0)
        return 1;
    else
        return taylor(x, n - 1) + pow(x, n) / fact(n);
}

double taylorStatic(int x, int n)
{
    static double fact = 1, sqr = 1;
    double res = 0;
    if (n == 0)
        return 1;
    else
    {
        res = taylorStatic(x, n - 1);
        sqr *= x;
        fact *= n;
        return res + sqr / fact;
    }
}

int main()
{
    int x, n;
    cin >> x >> n;
    cout << taylor(x, n);
    cout << endl
         << taylorStatic(x, n);
    return 0;
}