#include <stdio.h>
#include <string.h>
int main() {
    int n, x=0;
    scanf("%d", &n);
    while (n--)
    {
        char s[4];
        scanf("%s", s);
        if (strcmp(s, "X++")==0 || strcmp(s, "++X")==0)
        {
            x+=1;
        } else if (strcmp(s, "--X")==0 || strcmp(s, "X--")==0)
        {
            x-=1;
        }
    }
    printf("%d\n", x);
    return 0;
}