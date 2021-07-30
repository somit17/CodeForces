#include <iostream>
#include <algorithm>
#include<string.h>
using namespace std;
int main()
{
    char s[100];
    cin >> s;
    int upprCount = 0;
    int lowerCount = 0;
    int len = strlen(s);
    for (int i = 0; i < len; i++)
    {
        if (isupper(s[i]))
        {
            upprCount++;
        }
    }
    lowerCount = len - upprCount;
    if (lowerCount == upprCount)
    {
        for (int i=0; i<len; i++)
        putchar(tolower(s[i]));
    }
    else if(upprCount>lowerCount)
    {
         for (int i=0; i<len; i++)
        putchar(toupper(s[i]));
    }else{
       for (int i=0; i<len; i++)
        putchar(tolower(s[i])); 
    }
}