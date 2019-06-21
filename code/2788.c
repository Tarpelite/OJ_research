#include <stdio.h>
int main()
{
    int n,k,i,j,pst,num=0;
    int a[100000]={0};
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&pst);
        a[pst]++;
    }
    scanf("%d",&k);
    for(j=100000;num<k;j--)
    {
        if(a[j]!=0)
        {
            num++;
        }
    }
    printf("%d %d",j,a[j]);

  return 0;
}