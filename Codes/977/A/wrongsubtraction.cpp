#include<iostream>
using namespace std;
int main(){
    long num=0,steps=0,output=0;
    int last_digit=0;
    cin>>num;
    cin>>steps;
    while(steps!=0){
        last_digit=num%10;
        if(last_digit==0){
            num = num/10;
        }else{
            num--;
        }
        output=num;
        steps--;
    }
    cout<<output;
    return 0;
}