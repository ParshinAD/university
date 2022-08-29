#include <iostream>

using namespace std;

int main()
{
    cout << "enter A and B: " << endl;
    double a,b;
    cin >> a >> b;
    cout << "A + B = " << a + b << endl
         << "A - B = " << a - b << endl
         << "A * B = " << a * b << endl
         << "A / B = " << a / b << endl;
         if (a>b) cout << "MAX = " << a;
         else cout << "MAX = " << b;
    return 0;
}
