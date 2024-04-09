#include <iostream>
using namespace std;
int main()
{
    float a, b;
    cout << "Enter Weight of Limak\n";
    cin >> a;
    cout << "Enter Weight of Bob\n";
    cin >> b;
    if (a <= b)
    {
        for (int i = 0; i < 100; i++)
        {
            a = a + (i * 3);
            b = b + (i * 2);
            if (a > b)
            {
                cout << "the years Limak needs to become biger than Bob is: " << i;
                break;
            }
        }
    }
    else
    {
        cout << "Limak is larger than Bob";
    }
}