#include <stdio.h>


int main()
{
    int a[100000]={0},
        n,k,temp,max,
        i,j,t=0;

    scanf("%d%d",&n,&temp);

    a[temp]++;
    max=temp;

    for(i = 1;i < n;i++)
    {
        scanf("%d",&temp);
        a[temp]++;
        max=(max > temp)? max:temp;

    }
    scanf("%d",&k);

    for(i = max;i >= 0;i--)
    {
        if(a[i]==0)
            goto A;
        else
        {
            t++;
            if(t == k)
                break;
        }
        A:;
    }
   // printf("%d\n",max);
    printf("%d %d",i,a[i]);

    return 0;


}