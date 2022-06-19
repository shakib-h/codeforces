#include <stdio.h>
#include <string.h>
int main()
{
    char name[100];
    scanf("%s", name);
    int c = 0, len = strlen(name);
    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (name[i] == name[j])
            {
                c++;
                break;
            }
        }
    }
    if ((len-c) % 2 == 0)
    {
        printf("CHAT WITH HER!\n");
    }
    else
    {
        printf("IGNORE HIM!\n");
    }
    return 0;
}