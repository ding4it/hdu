#include <stdio.h>

int main()
{
  int a ,b;
  int n,m,i,sum;
  scanf("%d",&n);
  while(n--)
    {
      sum = 0;
      scanf("%d",&m);
      for(i=0;i<m;i++)
        {
          scanf("%d",&a);
          sum += a;
        }
      printf("%d\n",sum);
    }
  return 0;
}
