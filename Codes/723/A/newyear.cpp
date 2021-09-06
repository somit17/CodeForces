#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long max = 0, min = 0, i = 3;
    long ar[3];
    while (i--)
    {
        cin >> ar[i];
    }
    sort(ar, ar + 3);
    cout << ar[2] - ar[0];
    return 0;
}