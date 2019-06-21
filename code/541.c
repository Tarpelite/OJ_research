#include   <stdio.h>   
int a[10000000];
int b[10000000] = {0};  
 int main(void)
 {
int n,k;
int i;
int count = 0;
scanf("%d",&n);
for(i = 0; i < n; i++)
{
scanf("%d",&a[i]);
b[a[i]]++;
}
scanf("%d",&k);
for(i = 9999999; i > 0; i--)
{
if(b[i] != 0)
count++;
if(count == k)
break;
}
if(count == k)
printf("%d %d",i,b[i]);
}