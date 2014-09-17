#include <stdio.h>

int main()
{
  int a ,b;
  int n,m,i,sum;
  scanf("%d",&n);
  int init = 0;
  while(n--)
    {
      scanf("%d",&m);
      sum = 0;
      for(i=0;i<m;i++)
        {
          scanf("%d",&a);
          sum += a;
        }
      if (init == 1)
        {
          printf("n");
        }
      else
        {
          init = 1;
        }
      printf("%d\n\n",sum);
    }
  return 0;
}
