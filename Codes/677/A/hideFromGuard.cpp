#include <iostream>
using namespace std;

int main()
{
    int n = 0, hFence = 0;
    cin >> n >> hFence;
    int hPerson = 0, widthRoad = 0;

    while (n--)
    {
        cin >> hPerson;
        widthRoad += hPerson > hFence ? 2 : 1;
    }
    cout << widthRoad;
    return 0;
}