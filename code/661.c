#include<stdio.h>
#include<stdlib.h>
int a[10000000];
int comp (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}
int main()
{
     int n,k,i=0,j=1,x=1;

     scanf("%d",&n);
     while(i<n)
     {
          scanf("%d",&a[i]);
          i++;
     }
     scanf("%d",&k);

     qsort(a,n,sizeof(int),comp);

     for(i=n-1,j=1,x=1;i>0;i--)
     {
          if(a[i]>a[i-1])
          {
               x++;
          }
          if(x==k)
          {
               while(a[i-1]==a[i-j-1])
               {
                    j++;
               }
               break;
          }
     }
     printf("%d %d",a[i-1],j);

     return 0;
}