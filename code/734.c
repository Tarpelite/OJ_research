#include<math.h>
#include<ctype.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define lol long long

int n,t,c = 0,k;
int a[101111];

int main(int argc,char** argv)
{
    scanf("%d",&n);
    for(int i = 1;i <= n;i++)
    {
        scanf("%d",&t);
        a[t]++;
    }
    scanf("%d",&k);
    for(int i = 100000;i >= 1;i--)
    {
        if(a[i]) c++;
        if(c == k)
        {
            printf("%d %d",i,a[i]);
            return 0;
        }
    }
    return 0;
}