#include<math.h>
#include<ctype.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define lol long long
#define u64 unsigned long long

#define M 23333
u64 jc[M],m,n;

void init()
{
    jc[0] = 1u;
    for(int i = 1;i < M;i++)
    {
        jc[i] = jc[i-1] * i;
    }
}

int main(int argc,char** argv)
{
    scanf("%llu%llu",&m,&n);
    init();
    if(!m) return printf("1"),0;
    if(!n) return printf("1"),0;
    printf("%llu",jc[m] / jc[n] / jc[m - n]);
    return 0;
}