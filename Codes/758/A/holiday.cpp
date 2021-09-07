#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

    long n = 0, sum = 0, max = 0;
    cin >> n;
    long ar[n];
    while (n--)
    {
        cin >> ar[n];
    }
    int asize = sizeof(ar) / sizeof(ar[0]);
    sort(ar, ar + asize);
    max = ar[asize-1];
    for (int i = 0; i < asize; i++)
    {
        sum = sum +(max - ar[i]);
    }
    cout << sum;
    return 0;
}