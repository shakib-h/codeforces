#include <stdio.h>
int main() {
  int n, p=0, a, b, c;
  scanf("%d", &n);
  while (n--) {
    scanf("%d%d%d", &a, &b, &c);
    if (a+b+c>1)
    {
        p+=1;
    }
  }
  printf("%d\n", p);
  return 0;
}