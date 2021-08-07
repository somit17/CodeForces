#include <iostream>
using namespace std;
int main()
{
    int n = 0, count = 1;
    cin >> n;
    int prev = 0;
    int mg[n];
    for (int i = 0; i < n; i++)
    {
        cin >> mg[i];
    }
    for (int i = 1; i < n; i++)
    {
        prev = mg[i-1];
        if(prev!=mg[i]){
            count++;
        }
    }
    
   
    cout << count << endl;
}