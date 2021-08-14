#include <iostream>
using namespace std;

int main() {
    long num = 0,leftOver = 0;
    cin >> num;
    int count = 0;
    //100
    leftOver = num%100;
    count+=(num/100);
    num = leftOver;

    //20
    leftOver = num%20;
    count+=(num/20);
    num = leftOver;

    //10
    leftOver = num%10;
    count+=(num/10);
    num = leftOver;


    //5
    leftOver = num%5;
    count+=(num/5);
    num = leftOver;

    //1
    count+=num;
    cout<<count;
    return 0;
}