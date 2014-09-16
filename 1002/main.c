#include <stdio.h>
#include <string.h>
#include <memory.h>
int main()
{
  char a[1005],b[1005],c[1005];
  int T;
  int la,lb,l;
  scanf("%d",&T);
  int i = 1,j,k;
  while(T--)
    {
      scanf("%s %s",a,b);
      printf("Case %d:\n",i++);
      printf("%s + %s = ",a,b);
      la = strlen(a) - 1;
      lb = strlen(b) - 1;
      memset(c,0,sizeof(c));
      j = 0;
      while(la>=0 && lb>=0)
        {
          c[j] += a[la] - '0' + b[lb] - '0';
          if (c[j] > 9)
            {
              c[j] -=10;
              c[j+1] +=1;
            }
          la--;
          lb--;
          j++;
        }
      if (la>=0)
        {
          for(;la>=0;la--)
            {
              c[j] += a[la] - '0';
              if(c[j] > 9)
                {
                  c[j] -= 10;
                  c[j+1] += 1;
                }
              j++;
            }
        }
      else if(lb >=0)
        {
          for(;lb >=0;lb --)
            {
              c[j] +=b[lb] - '0';
              if(c[j] > 9)
                {
                  c[j] -= 10;
                  c[j+1] += 1;
                }
              j++;
            }
        }
      l = c[j] == 0? j-1:j;
      for(j=l;j>=0;j--)
        {
          printf("%d",c[j]);
        }
      printf("\n");
      if(T != 0)
        printf("\n");
    }
  return 0;
}
