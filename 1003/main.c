#include <stdio.h>

int main()
{
  int arr[100005];
  int end,tend;
  int start,tstart;
  int T;
  int n;
  int sum,tsum;
  scanf("%d",&T);
  int i,j,k;
  for(k=0;k<T;k++)
    {
      scanf("%d",&n);
      for(i=0;i<n;i++)
        {
          scanf("%d",arr + i);
        }
      printf("Case %d:\n",k+1);
      sum  = arr[0];
      tsum = 0;
      tstart = start = end = tend = 0;
      for(i=0;i<n;i++)
        {
          tsum += arr[i];
          if(sum < tsum)
            {
              sum = tsum;
              start = tstart;
              end = i;
            }
          if(tsum < 0)
            {
              tsum = 0;
              tstart = i+1;
            }

        }
      printf("%d %d %d\n",sum,start+1,end+1);
      if(k != T-1)
        {
          printf("\n");
        }
    }

  return 0;
}
