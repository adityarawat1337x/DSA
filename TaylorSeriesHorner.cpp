#include <iostream>

using namespace std;

double taylor(int x, int n)
{
    static double i = 1;
    if (i == n)
        return 1 + (x / i);
    else
    {
        return 1 + ((x / i++) * taylor(x, n));
    }
}

int main()
{
    int x, n;
    cin >> x >> n;
    cout << taylor(x, n);
    return 0;
}