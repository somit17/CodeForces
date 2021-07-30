#include <iostream>
#include <string.h>
#include<algorithm>
using namespace std;
int main()
{
    int count = 0,i;
    char data[100];
    cin >> data;
    int len=strlen(data);
    sort(data,data+len);
    for(int i=0;i<len;i++){
        if(data[i]!=data[i+1]){
            count++;
        }
    }
    if (count%2==0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }
    return 0;
}