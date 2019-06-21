#include <stdio.h>

int sushu(int num)
{
    int i;
    if(num==1) return 0;
    if(num==2) return 1;
    for(i=3;i<=num/2;i++)
    {
        if(num%i) continue;
        else return 0;
    }
    return 1;
}
int main()
{
int n;
scanf("%d",&n);
n++;
while(!sushu(n))
n++;
printf("%d",n);
return 0;
}