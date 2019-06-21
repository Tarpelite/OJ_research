#include<stdio.h>
int index[100010];
int main()
{
    int n,k;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&k);
        index[k]++;
    }
    scanf("%d",&k);
    int cnt=0;
    for(int i=100000;i>=1;i--)
        if(index[i])
        {
            cnt++;
            if(cnt==k)
            {
                printf("%d %d",i,index[i]);
                break;
            }
        }
    return 0;
}