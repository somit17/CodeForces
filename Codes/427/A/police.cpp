#include <iostream>
using namespace std;

int main()
{
    long n = 0;
    cin >> n;
    long input = 0, police = 0, crime = 0, i = 0;
    while (n > 0)
    {
        cin >> input;
        if (input > 0)
        {
            police += input;
        }
        else
        {
            if (police < 1)
            {
                ++crime;
            }
            else
            {
                --police;
            }
        }
        n--;
    }
    cout << crime;
    return 0;
}