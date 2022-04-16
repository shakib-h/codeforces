#include <stdio.h>
int main() {
    int m, n, s;
    scanf("%d%d", &m, &n);
    s=m*n;
    if (s%2==0)
    {
        printf("%d\n", s/2);
    } else {
        printf("%d\n", (s-1)/2);
    }
    return 0;
}