#include <stdio.h>
int main()
{
    int a,b,i,j,s=1;
    scanf("%d%d",&a,&b);
    if(b==0||a==b)
    {
        printf("1");
        return 0;
    }
    for(i=1,j=a;i<=b;i++,j--)
    {
        s=s*j/i;
    }
    printf("%d",s);
    return 0;
}