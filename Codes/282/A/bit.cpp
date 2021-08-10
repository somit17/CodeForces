#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int n, x = 0;
    char c[100], a[4] = "X++", b[4] = "++X";
    scanf("%d", &n);
    while (n--)
    {
        cin >> c;
        if (strcmp(c, a) == 0 || strcmp(c, b) == 0)
        {
            x++;
        }
        else
            x--;
    }
    printf("%d\n", x);
    return 0;
}