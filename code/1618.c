#include<stdio.h>
#include<math.h>
int zhi(int);
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i++;)
    {
        if(zhi(n+i-1)==1)
        {
            printf("%d",n+i-1);
            break;
        }
    }
}
int zhi(int k)
{
    int j,t;
    if(k==2||k==3)
    {
        k=1;
    }
    else if (k>3)
    {
        for(j=2;j<=sqrt(k);j++)
        {
            if((k%j)==0)
            {
                t=0;
                break;
            }
            else if(k%j!=0)
            {
                t=1;
                continue;
            }
        }
        k=t;
    }
    return k;
}