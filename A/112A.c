// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>
// int main()
// {
//     char x1[100], x2[100];
//     scanf("%s%s", x1, x2);
//     int l, s;
//     l = strlen(x1);
//     for (int i = 0; i < l; i++)
//     {
//         if (x1[i] >= 'A' && x1[i] <= 'Z')
//         {
//             x1[i] = tolower(x1[i]);
//         }
//         if (x2[i] >= 'A' && x2[i] <= 'Z')
//         {
//             x2[i] = tolower(x2[i]);
//         }
//     }
//     s = strcmp(x1, x2);
//     if (s > 0)
//     {
//         s = 1;
//     }
//     else if (s < 0)
//     {
//         s = -1;
//     }
//     printf("%d\n", s);
//     return 0;
// }

#include <stdio.h>
#include <string.h>
int main()
{
    char x1[100], x2[100];
    scanf("%s%s", x1, x2);
    int s = strcasecmp(x1, x2);
    if (s > 0)
    {
        s = 1;
    }
    else if (s < 0)
    {
        s = -1;
    }
    printf("%d\n", s);
    return 0;
}