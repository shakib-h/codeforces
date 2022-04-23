#include <stdio.h>
int main () {
    int a, b, c, price=0;
    scanf("%d%d%d", &a, &b, &c);
    for (int i = 1; i <= c; i++)
    {
        price+=a*i;
    }
    if (price>b)
    {
        b=price-b;
    } else {
        b=0;
    }
    printf("%d\n", b);
    return 0;
}