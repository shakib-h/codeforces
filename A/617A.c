#include <stdio.h>
int main()
{
    int x, s = 0;
    scanf("%d", &x);
    while (x != 0)
    {        
        if (x % 5 == 0)
        {
            s++;0
            x -= 5;
        }
        else if (x % 4 == 0)
        {
            s++;
            x -= 4;
        }
        else if (x % 3 == 0)
        {
            s++;
            x -= 3;
        }
        else if (x % 2 == 0)
        {
            s++;
            x -= 2;
        }
        else if (x % 1 == 0)
        {
            s++;
            x -= 1;
        }
    }
    printf("%d\n", s);
    return 0;
}