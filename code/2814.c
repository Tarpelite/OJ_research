#include<stdio.h>
#include<math.h>
int main()
{
    int n,x[100001],a[100001]={0},b[100001]={0},K,i,j,k,l,temp;
    scanf("%d",&n);
    for(i=1,j=1;i<=n;i++)
    {
        scanf("%d",&x[j]);
        b[x[j]]++;
    }
    scanf("%d",&K);
    for(i=0,j=1;i<=100001;i++)
    {
        if(b[i]!=0)
        {
            a[j]=i;
            j++;
        }

    }
    j--;
    printf("%d %d",a[j-K+1],b[a[j-K+1]]);
    return 0;
}