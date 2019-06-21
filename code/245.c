#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a[100000]={0},n,i,j,k;
   scanf("%d",&n);
   for(i=0;i<n;i++)
    {scanf("%d",&j);
    a[j]=a[j]+1;}
   scanf("%d",&k);
   for(i=100000;k>0;i--)

   {if(a[i]!=0)
     k--;}
   printf("%d %d",i,a[i]);
   return 0;


}