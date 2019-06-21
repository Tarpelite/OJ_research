#include<ctype.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define lol long long

int k;

int ispr(int a)
{
    if(!(a & 1)) return 0;
    for(int i = 3;i * i<= a;i += 2)
    {
        if(!(a % i)) return 0;
    }
    return 1;
}

int main(int argc,char** argv)
{
    scanf("%d",&k);
    while(1)
    {
        k++;
        if(ispr(k))
        {
            printf("%d",k);
            return 0;
        }
    }
    return 0;
}