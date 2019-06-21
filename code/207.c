#include <stdio.h>
#include<math.h>

int a[100002]={};


int main()
{
   int n,k;
    int x,y;
    int l,r;
    int i;

    l=0;
    r=0;

    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        scanf("%d", &x);
        y=x;
        a[y]=a[y]+1;
    }

    scanf("%d", &k);
    for(i=100000;i>=1;i--)
    {
        if(a[i]>=1)
        {
            r=i;
            l++;
        }
        if(l==k)
            break;
    }
    printf("%d %d", r, a[r]);

    return 0;

}