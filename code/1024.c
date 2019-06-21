#include <stdio.h>
int zhishu(int);
int main()
{
    int n;
    scanf("%d",&n);
    int i;
    int a=0;
    while(a!=1)
    {
        n++;
        a=zhishu(n);
    }
    printf("%d",n);
    return 0;
}
int zhishu(int m)
{
    int i;
    int a;
    if(m==2||m==3)
    {
        a=1;
    }else{
        a=1;
        for(i=2;i<=m/2+1;i++)
        {
            if(m%i==0)
            {
                a=0;
            }
        }
    }
    return a;
}