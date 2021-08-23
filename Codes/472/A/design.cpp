#include<iostream>
using namespace std;
//4 and 9 are the two composite numbers

int main(){
    long num;
    cin>>num;
    if (num % 2 == 0) {
        cout << num - 4 << " 4";
    } else {
        cout << num - 9 << " 9";
    }
    return 0;
}