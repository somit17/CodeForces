#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    int mat[5][5],x=0,y=0;
    int steps = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> mat[i][j];
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (mat[i][j] == 1)
            {
                x=i,y=j;
            }
        }
    }
    steps=(abs(x-2)+abs(y-2));
    cout<<steps;
    return 0;
}