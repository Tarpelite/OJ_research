#include<stdio.h>
#include<stdlib.h>
int cmp(const void*a,const void*b)
{
    return *(int*)b-*(int*)a;
}

int main()
{
    int n,i,k,m,buf;
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);

    qsort(a,n,sizeof(a[0]),cmp);

    m = 1;
    int c = 1;
    int s=a[0];
    for(i=0; i<(n-1); i++)
    {
        if(a[i]!=a[i+1]&&m<k)
        {
            m = m + 1;
            s = a[i+1];
        }
        if(a[i+1]==a[i+2]&&m==k)
        {
            c = c + 1;
        }
        if(a[i+1]!=a[i+2]&&m==k)
        {
            break;
        }
    }
    printf("%d %d",s,c);
    return 0;
}