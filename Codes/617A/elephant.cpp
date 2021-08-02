#include <iostream>
using namespace std;

int main()
{
    long input = 0, count = 0;
    cin >> input;
    count = input / 5;
    if (input % 5 == 0)
    {
        cout << count;
    }
    else
    {
        cout << count + 1;
    }

    return 0;
}