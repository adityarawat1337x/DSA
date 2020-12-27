#include <iostream>

using namespace std;
double fact(int x)
{
    if (x == 0)
        return 1;
    else
        return x * fact(x - 1);
}

double nCr(int n, int r)
{
    double ncr = fact(n) / (fact(n - r) * fact(r));
    return ncr;
}

int main()
{
    int n, r;
    cin >> n >> r;
    cout << nCr(n, r);
    return 0;
}
