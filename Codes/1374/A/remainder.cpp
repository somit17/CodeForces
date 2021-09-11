#include <iostream>
using namespace std;

void solve()
{
    long x = 0, y = 0, n = 0;
    cin >> x >> y >> n;
    int mod = n % x;
    if (mod - y >= 0)
    {
        n = n - (mod - y);
    }
    else
    {
        n = n - mod - x + y;
    }
    cout << n<<endl;
}

int main()
{
    long input = 0;
    cin >> input;
    for (int i = 0; i < input; i++)
    {
        solve();
    }
    return 0;
}
