#include <iostream>
int main()
{
    int n, k,count=0;
    std::cin >> n >> k;
    int ip[n];
    for (int i = 0; i < n; i++)
    {
        std::cin >> ip[i];
    }
    for (int i = 0; i < n; i++)
    {
      if(ip[i]>0 && ip[i]>=ip[k-1]){
          count++;
      }
    }
    std::cout<<count;
    return 0;
}