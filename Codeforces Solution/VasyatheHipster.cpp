#include <iostream>
using namespace std;
int main()
{
    int a, b, al, s = 0;
    cin >> a >> b;
    if (a < b)
    {                  // Instead of using if and else to find min number we 
                      //  can use int k=min(a,b) and can be used to directlty print alternate pairs.
        al = a;
        a = a - al;
        b = b - al;
    }
    else
    {
        al = b;
        a = a - al;
        b = b - al;
    }
    while (a > 1)
    {
        s++;
        a = a - 2;
    }
    while (b > 1)
    {
        s++;
        b = b - 2;
    }
    cout << al << " " << s;

    return 0;
}