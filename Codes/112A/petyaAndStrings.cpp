#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s1[101], s2[101];
    cin >> s1>> s2;
    for (int i = 0; i < strlen(s1); i++)
    {
        s1[i] = tolower(s1[i]);
        s2[i] = tolower(s2[i]);
    }
    cout << strcmp(s1, s2) << endl;
}