#include<stdio.h>
int panduanzhishu(int x){
int i;
i=2;
while(x%i!=0)
i++;
if(i<x)
   return 0;
if(i==x)
    return 1;
    }
int main()
{
    int n, i;
    scanf("%d",&n);
    i=n+1;
    while(panduanzhishu(i)==0)
    i++;
    printf("%d",i);

    return 0;
    }