#include <iostream>
using namespace std;
int main()
{
    long l = 0, b = 0;
    cin >> l;
    cin >> b;
    int years = 0;
    while (l <= b)
    {
        l = 3 * l;
        b = 2 * b;
        years++;
    }
    cout << years;
    return 0;
}