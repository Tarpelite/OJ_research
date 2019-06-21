#include<stdio.h>
#include<stdbool.h>
#define N 500000
bool isprimer[N+1];
void solve()
{
    int i,j;
    memset(isprimer,true,sizeof(isprimer));
    for(i=2;i<=sqrt(N);i++)
    {
        if(isprimer[i]==true)
        {
            for(j=2;j*i<=N;j++)
            {
                isprimer[i*j]=false;
            }
        }
    }
    return 0;
}
int main ()
{
    solve();
    int n;
    scanf("%d",&n);
    int i;
    for( i=n+1;; i++)
    {
        if(isprimer[i])
        {
            printf("%d\n",i);
            return 0;
        }
    }
    return 0;
}