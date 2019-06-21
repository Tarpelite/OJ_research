#include<stdio.h>
int main()
{
    int m,n,l;
    long long int x,y,z,C;
    int i;
    scanf("%d%d",&m,&n);
    x=1;
    y=1;
    l=m-n;
    z=1;
    if(l!=0)
    {
    for(i=1;i<=m;i++)
    {x=i*x;
    }
    for(i=1;i<=n;i++)
    {y=i*y;
    }
    for(i=1;i<=l;i++)
    {z=i*z;
    }
    C=x/y/z;
    }
    else
        {C=1;
        }
    printf("%d",C);
    return 0;
}