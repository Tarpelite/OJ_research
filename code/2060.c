#include<stdio.h>
long long jie(int a)
{
    if(a==0)
        return 1;
    if(a==1)
        return 1;

    return a*(jie(a-1));
}
int main()
{
    int  m,n;
    long long zuhe,x,y,z;
    scanf("%d%d",&m,&n);
    if ((n==0)||(m==0))
        {zuhe=0;
        printf("%d",zuhe);
        return 0;
        }
        if(m<n)
        {
            printf("%d",m);
            return 0;
        }
    x=(long long)jie(m);
    y=(long long)jie(n);
    z=(long long)jie(m-n);
    zuhe=x/(y*z);
    printf("%lld\n",zuhe);

    return 0;

}