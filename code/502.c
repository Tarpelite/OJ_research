#include<stdio.h>
int a[10000001]; 
int main()
{
int n,k,i=0,j=10000000;
scanf("%d",&n);
while(i<n)
{
scanf("%d",&k);
a[k]++;
i++;
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