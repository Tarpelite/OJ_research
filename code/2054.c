#include <stdio.h>
int main()
{
    int a[100001]={0};
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int x;
        scanf("%d",&x);
        a[x]++;
    }
    int k;
    scanf("%d",&k);
    int cnt=0;
    int i=100000;
    for(int i=100000;i>=1;i--)
    {
        if(a[i]!=0)
        {
            cnt++;
        }
        if(cnt==k)
        {
                printf("%d %d",i,a[i]);
                break;
        }
    }

}