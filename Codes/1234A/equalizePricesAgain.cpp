#include<iostream>
using namespace std;
int equalize(int A[],int count){
     int avg=0,sum=0;

    for(int i=0;i<count;i++){
        sum=sum+A[i];
    }
    if(count%2==0){
avg=(sum/count)+1;
    }else{
        avg=(sum/count)+1;
    }
    
    return avg;
}
int main(){
    int n;
    cin>>n;
    while(n!=0){
        int a;
        cin>>a;
        int nums[a];
        for(int i=0;i<a;i++){
            cin>>nums[i];
        }
       cout<< equalize(nums,a)<<endl;
       n--;
    }
}