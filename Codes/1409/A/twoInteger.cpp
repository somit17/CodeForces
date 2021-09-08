#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int input = 0;
    cin >> input;
    while (input--)
    {
        long a = 0, b = 0;
        cin >> a;
        cin >> b;
        long diff = abs(b - a);
        long quotient = diff / 10;
        long remainder = diff % 10;
        if (remainder)
        {
            quotient++;
        }
        cout << quotient<<endl;
    }
    return 0;
}