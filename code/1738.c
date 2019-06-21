#include<stdio.h>
#include<stdlib.h>
int cmp(const void *a,const void *b)
{
    return *(int *)b-*(int *)a;
}
int a[10000001];
int main()
{
    int n;
    scanf("%d",&n);
    int i=0;
    while(i<n)
    {
        scanf("%d",&a[i]);
        i++;
    }
    qsort(a,n,sizeof(a[0]),cmp);
    int t,c=0;
    scanf("%d",&t);
    while(c<t-1)
    {
        if(a[c]==a[c+1])
        {
            t++;
        }
        c++;
    }
    printf("%d ",a[t-1]);
    int k=0,l=0;
    while(l<n)
    {
        if(a[l]==a[t-1])
            k++;
        l++;
    }
    printf("%d",k);
    return 0;
}