#include<math.h>
#include<ctype.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define lol long long

#define M 23333
lol jc[M],m,n;

void init()
{
    jc[0] = 1;
    for(int i = 1;i < M;i++)
    {
        jc[i] = jc[i-1] * i;
    }
}

int main(int argc,char** argv)
{
    scanf("%lld%lld",&m,&n);
    init();
    printf("%lld",jc[m] / jc[n] / jc[m - n]);
    return 0;
}