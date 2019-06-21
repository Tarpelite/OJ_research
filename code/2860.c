#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int cmp(const void *a,const void *b)
{
    return *(int *)b-*(int *)a;
}
 int k[20000000];

int main(){
    int n,i,t,j,a,x=0;


   scanf("%d",&n);

   for(i=0;i<n;i++)
   {
       scanf("%d",&k[i]);
   }
   scanf("%d",&a);
 qsort(k,n,sizeof(k[0]),cmp);
for(i=0;i<n-1;i++)
{
    if(k[i]!=k[i-1])
        x=1;
        break;
    if(k[i]==k[i-1])
        x=x;
}
if(x==1)
{

 for(i=0,t=1;t<a&&i<n;i++)
 {
     if(k[i+1]<k[i])
        t++;
 }
 printf("%d ",k[i]);
 for(j=i,t=1;k[j+1]==k[j]&&j<n;j++)
 {
        t++;
 }
 printf("%d",t);
}
if(x==0)
{
    printf("%d ",k[0]);
    printf("%d",n);
}
   return 0;
}