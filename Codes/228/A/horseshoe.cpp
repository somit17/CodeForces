#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    long l = 4, c[4], count = 0;
    while (l--)
    {
        cin >> c[l];
    }
    sort(c, c + 4);
    for(int i=0;i<4;i++){
        if(c[i]==c[i+1]){
            count++;
        }
    }
    cout << count;
    return 0;
}