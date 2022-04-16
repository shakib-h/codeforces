#include <stdio.h>
int main() {
  int n, k, r=0, s[100], i;
  scanf("%d%d", &n, &k);
  for (i = 0; i < n; i++)
  {
    scanf("%d", &s[i]);
  }
  for (i = 0; i < n; i++)
  {
      if (s[i]>=s[k-1] && s[i]>0)
    {
        r+=1;
    }
  }
  printf("%d\n", r);
  return 0;
}