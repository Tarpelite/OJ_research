#include<stdio.h>
#include<math.h>
int prime(int n)
{
    int i;
    for(i = 2;i <= sqrt(n+1); i++)
    if(n % i == 0 )return 0;
    return n>1;
}
    int main()
{
    int i;
    scanf("%d",&i);
    for(;!prime(++i););
    printf("%d\n",i);
    return 0;
}