#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100000]= {};
    int n,i;
    int x,k;
    int m=0,y,z=0;
    scanf("%d",&n);
    int b[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&x);
        a[x-1]=1;
        b[i]=x;
    }
    scanf("%d",&k);
    for(i=99999; i>=0; i--)
    {
        if(a[i]==1)
        {
            m++;
            if(m==k)
            {
                y=i+1;
                break;
            }
        }
    }
    for(i=0; i<n; i++)
    {
        if(b[i]==y)
        {
            z++;
        }
    }
    printf("%d %d",y,z);
    return 0;
}