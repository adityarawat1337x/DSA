#include <iostream>

using namespace std;

void toh(int n, int a, int b, int c)
{
    if (n)
    {
        toh(n - 1, a, c, b);
        cout << "\nFROM " << a << " To " << c;
        toh(n - 1, b, a, c);
    }
}

int main()
{
    int x;
    cin >> x;
    toh(x, 1, 2, 3);
    return 0;
}