#include<stdio.h>
#include<string.h>
#define  maxn 10005
int N[maxn];
int M[maxn];
int H[maxn];
int main()
{
    int n,k,d;
    int l,r;
    scanf("%d%d",&n,&k);
    N[0]=0;
    M[0]=1;
    H[0]=0;
    int i;
    for( i=1; i<=n; i++)
    {
        scanf("%d",&d);
        N[i]=(N[i-1]+d)%n;
        M[i] = d;
        H[i]=H[i-1]^d;
    }
    while(k--)
    {
        scanf("%d%d",&l,&r);
        l++;
        r++;
        int  x=(N[r]-N[l-1]+n)%n;
        int  y = 1;
        for(i=l;i<=r;i++)
        {
            y=((y%n)*(M[i]%n))%n;
        }
        if(x>y)
        {
            int tmp = x;
            x = y;
            y = tmp;
        }
        x++;
        y++;
        printf("%d\n",H[y]^H[x-1]);
    }
    return 0;
}