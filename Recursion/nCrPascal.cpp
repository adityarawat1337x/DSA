#include <iostream>

using namespace std;

double nCrPAscal(int n, int r)
{
    if (n == r || r == 0)
        return 1;
    else
        return nCrPAscal(n - 1, r - 1) + nCrPAscal(n - 1, r);
}

int main()
{
    int n, r;
    cin >> n >> r;
    cout << nCrPAscal(n, r);
    return 0;
}