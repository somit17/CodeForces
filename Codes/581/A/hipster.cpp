#include<iostream>
using namespace std;

int main(){

    long red=0,blue=0;
    cin>>red>>blue;
    long daysWear=0,daysWithout=0;
    long max= red>blue?red:blue;
    daysWear = red>blue?blue:red;
    daysWithout = (max-daysWear)/2;
    cout<<daysWear<<" "<<daysWithout;
    return 0;
}