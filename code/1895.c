#include <stdio.h>
#include <stdlib.h>
int s[10000001];
int comp(const void*a,const void*b);
int main()
{ int i,k,n,a=1,j=0,m;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   scanf("%d",&s[i]);
   qsort(s,n,sizeof(s[1]),comp);
   scanf("%d",&k);
   for (i=0;i<n;i++)
   {
       if(s[i+1]!=s[i])
       {j++;
        if(j==k)
          break;
        a=1;}
      else
       a++;
   }

   printf("%d %d",s[i],a);
  return 0;
}

int comp(const void*a,const void*b)
{
return (*(int*)b<*(int*)a)?-1:1;
}