#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000];
    int i, j, ln, temp;
    scanf("%s", s);
    ln = strlen(s);
    for (i = 0; i < ln; i += 2)
    {
        for (j = 0; j < ln - 1; j += 2)
        {
            if (s[j] > s[j + 2])
            {
                temp = s[j];
                s[j] = s[j + 2];
                s[j + 2] = temp;
            }
        }
    }
    printf("%s\n", s);
    return 0;
}