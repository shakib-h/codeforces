// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int m[5][5], i, j, b;
//     for (i = 0; i < 5; i++)
//     {
//         for (j = 0; j < 5; j++)
//         {
//             scanf("%d", &m[i][j]);
//         }
//     }
//     for (i = 0; i < 5; i++)
//     {
//         for (j = 0; j < 5; j++)
//         {
//             if (m[i][j] == 1)
//             {
//                 b = abs(i - 2)+abs(j - 2);
//                 break;
//             }
//         }
//     }
//     printf("%d\n", b);
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, j, b;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &b);
            if (b == 1)
            {
                printf("%d\n", abs(i - 2) + abs(j - 2));
                break;
            }
        }
    }

    return 0;
}
