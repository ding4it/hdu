#include <stdio.h>

int main()
{
  int a ,b;
  int n,m,i,sum;
  while(scanf("%d",&n) == 1)
    {
      sum = 0;
      for(i=0;i<n;i++)
        {
          scanf("%d",&a);
          sum += a;
        }
      printf("%d\n",sum);
    }
  return 0;
}
