#include<stdio.h>
#include <stdlib.h>

int a[10000001];

int compare (const void * a, const void * b)
{
    return ( *(int*)b - *(int*)a );
}

int main()
{
    int n,i,j,k,g=1,q=0,kmax,hold,t;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);

    qsort(a,n,sizeof(int),compare);

    i=0;
    while(i<n){
    if(g==k)
    {
        kmax=a[i];
        q++;
    }

    t=a[i+1]-a[i];
    if(t!=0)
    {
        g++;
    }

    if(g==k+1)
    {
        break;
    }
    i++;
    }



    printf("%d %d",kmax,q);

    return 0;
}