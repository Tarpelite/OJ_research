#include <stdio.h>
int main()
{
   int i,k,a[100001]={0},n,m;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
     scanf("%d",&m);
     a[m]++;
   }
   scanf("%d",&k);
    for(i=100000;i>=0;i--)
   {
    if(a[i]>0)k--;
    if(k==0)break;
   }
    printf("%d %d",i,a[i]);
    return 0;
}