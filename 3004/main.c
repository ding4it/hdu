#include <stdio.h>

int main()
{
  int a ,b;
  int n,i,sum;
  scanf("%d",&n);
  while(n!=0)
    {
      sum = 0;
      for(i=0;i<n;i++)
        {
          scanf("%d",&a);
          sum += a;
        }
      printf("%d\n",sum);
      scanf("%d",&n);
    }
  return 0;
}
