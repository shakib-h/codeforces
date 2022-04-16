#include <stdio.h>
#include <string.h>
int main() {
  char w[100];
  int n, i, l;
  scanf("%d", &n);
  for (i = 0; i < n; i++)
  {
    scanf("%s", w);
    l = strlen(w);
    if (l<=10)
    {
        printf("%s\n", w);
    } else {
        printf("%c%d%c\n",w[0], l-2, w[l-1]);
    }
  }
  return 0;
}