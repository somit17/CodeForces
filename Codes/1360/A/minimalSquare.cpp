#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    long input = 0;
    cin >> input;
    while (input--)
    {
        long a = 0, b = 0;
        cin >> a >> b;
        long min_v = min(a, b);
        long max_v = max(a, b);
        long ans = max(min_v * 2, max_v);
        cout << pow(ans, 2)<<endl;
    }
    return 0;
}