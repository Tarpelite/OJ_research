#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int zhishu(int x)
{
    int i=x-1;
    while(x%i!=0&&i>1)
        i--;
    if(i==1)
        return 0;
    else
        return 1;
}


int main()
{
    int n;
    scanf("%d",&n);
    n++;
    while(zhishu(n))
        {n++;}
    printf("%d",n);
    return 0;
}