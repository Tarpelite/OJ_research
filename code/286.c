#include<stdio.h>
int a[10000001];
int main()
{
int n,k,i=0,j=10000000;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&k);
a[k]++;
}
scanf("%d",&k);
while(k>0)
{
if(a[j]!=0)
k--;
j--;
};
j++;
printf("%d %d",j,a[j]);
return 0;
}