#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    string sum = s1 + s2;
    sort(sum.begin(), sum.end());
    sort(s3.begin(), s3.end());
    int len = 0;
    len = s3.size()>sum.size()?s3.size():sum.size();
    for (int i = 0; i < len; i++)
    {
        if (sum[i] != s3[i])
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}