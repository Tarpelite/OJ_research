#include<stdio.h>
#include<math.h>
int zspd(int x);
int main()
{
    int n,a,i,flag;
    scanf("%d",&n);
    flag=zspd(n+1);
    if(flag==0)
        printf("%d",n+1);
    else
    {
        i=2;
    while(flag==1)
    {
        flag=zspd(n+i);
        i++;
    }
    printf("%d",n+i-1);
    }
    return 0;
}
int zspd(int x)
{
    double a;
    int i,flag;
    flag=0;
    a=sqrt(x);
    for(i=2;i<a+1;i++)
        {
            if(x%i==0)
                flag=1;
        }
        return flag;
}