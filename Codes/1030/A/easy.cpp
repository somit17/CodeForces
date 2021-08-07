#include <iostream>

using namespace std;

int main()
{
    int n = 0, num = 0,easyCount=0,hardCount=0;
    cin >> n;
    while (n--)
    {
        cin >> num;
        num==1?hardCount++:easyCount++;
    }
    if(hardCount>=1){
        cout<<"HARD";
    }else{
        cout<<"EASY";
    }
    return 0;
}