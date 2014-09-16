#include <stdio.h>

int main()
{
  long n;
  while(scanf("%d",&n) == 1)
    {

      printf("%d\n",n*(n+1)/2);
    }
  return 0;
}
