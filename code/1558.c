#include<stdio.h>
int main()
{
    int a,b,c=1,i=0;
    scanf("%d%d",&a,&b);
    while(i<b)
    {

        c=c*(a-i);
        i++;
    }
    i=1;

    while(i<=b)
    {

        c=c/i;
        i++;
    }
    printf("%d",c);
    return 0;
}