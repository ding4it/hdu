#include <stdio.h>


void qsort(int * arr,int start,int end)
{
  if(start >= end -1)
    return;

  int i,j,k;
  int tmp = arr[start];
  k = start;
  for(i=k+1;i<end;i++)
    {
      if(arr[i] < tmp )
        {
          arr[k++] = arr[i];
        }
    }
  arr[k] = tmp;
  qsort(arr,start,k);
  qsort(arr,k+1,end);
}

int main()
{
  int i,c,n;
  int num[100];
  scanf("%d",&c);
  while(c--)
    {
      scanf("%d",&n);
      for(i=0;i<n;i++)
        {
          scanf("%d",num+i);
        }
      qsort(num,0,n);
      printf("%d\n",num[1]);
    }


  return 0;
}
