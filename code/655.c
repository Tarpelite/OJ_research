#include<stdio.h>
int main()
{
    int n, i, shu, k;
    int cishu[100005]= {0};

    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&shu);
        cishu[shu]++;
    }

    scanf("%d",&k);

    int j;
    for(j=100000; j>0; j--)
    {
        if(cishu[j]>0)
            k--;
        if(k==0)
            break;
    }

    printf("%d %d\n",j,cishu[j]);
    return 0;
}