#include <iostream>
#include <string.h>
#include <cstring>
using namespace std;

int main()
{
    string s;
    cin >> s;
    char c[s.size() + 1];
    strcpy(c, s.c_str());
    c[0] = toupper(c[0]);
    cout << c<<endl;
    return 0;
}