#include <iostream>

using namespace std;
template <class t>
class arithmetic
{
    t a;
    t b;

public:
    arithmetic(t, t);
    t add();
    t subtract()
    {
        return a - b;
    }
    t multiply(t x, t y);
    void show()
    {
        cout << "\n"
             << a << " " << b;
    }
};
template <class t>
arithmetic<t>::arithmetic(t x, t y)
{
    this->a = x;
    this->b = y;
}
template <class t>
t arithmetic<t>::add()
{
    return a + b;
}
template <class t>
t arithmetic<t>::multiply(t x, t y)
{
    a = a * x;
    b = b * y;
    return a + b;
}

int main()
{
    arithmetic<int> a(5, 10);
    a.show();
    cout << "add:" << a.add();
    a.show();
    cout << "sub:" << a.subtract();
    a.show();
    cout << "multi:" << a.multiply(2, 4);
    a.show();

    arithmetic<float> b(5.2, 10.1);
    b.show();
    cout << "add:" << b.add();
    b.show();
    cout << "sub:" << b.subtract();
    b.show();
    cout << "multi:" << b.multiply(2, 4);
    b.show();
    return 0;
}