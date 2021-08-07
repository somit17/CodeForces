#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int number = 0,count=0;
    cin >> number;
    int steps = 0;
    char arr[number + 1];
    for (int i = 0; i < number; i++)
    {
      cin>>arr[i];
    }
    
    for (int  i = 0; i < number; i++)
    {
        if(arr[i]==arr[i+1]){
            count++;
        }
    }
    
    cout << count << endl;
    return 0;
}