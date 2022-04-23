#include <stdio.h>
int main () {
    int a, b, y=0;
    scanf("%d%d", &a, &b);
    while (a<=b)
    {
        a*=3;
        b*=2;
        y++;
    }
    printf("%d\n", y);
    return 0;
}