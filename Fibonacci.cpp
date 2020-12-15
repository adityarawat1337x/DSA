#include <iostream>

using namespace std;

int fibo(int n)
{
    int t0 = 0, t1 = 1, f;
    if (n <= 1)
        return n;

    for (int i = 2; i <= n; i++)
    {
        f = t0 + t1;
        t0 = t1;
        t1 = f;
    }
    return f;
}

int rfibo(int n)
{
    if (n <= 1)
        return n;
    return rfibo(n - 2) + rfibo(n - 1);
}
int arr[100];

int mfibo(int n)
{
    if (n <= 1)
    {
        arr[n] = n;
        return n;
    }
    else
    {
        if (arr[n - 2] == -1)
            arr[n - 2] = mfibo(n - 2);
        if (arr[n - 1] == -1)
            arr[n - 1] = mfibo(n - 1);
        arr[n] = arr[n - 2] + arr[n - 1];
        return arr[n];
    }
}

int main()
{
    int x;
    cin >> x;
    for (int i = 0; i < x; i++)
        arr[i] = -1;
    cout << rfibo(x) << endl
         << fibo(x) << endl
         << mfibo(x);

    return 0;
}