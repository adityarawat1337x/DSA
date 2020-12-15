#include <iostream>

using namespace std;

int pow(int m, int n)
{
    if (n == 0)
        return 1;
    else
        return m * pow(m, n - 1);
}
int main()
{
    int x, y;
    cin >> x >> y;
    cout << pow(x, y);
    return 0;
}