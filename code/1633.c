#include<stdio.h>
#include<stdlib.h>
int a[10000000],b[10000000],c[10000000]={0};
int cmp(const void*a,const void*b)
{
    return(*(int*)b-*(int*)a);
}

int main()
{
    int n,k,i,j,x;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    scanf("%d",&k);

    qsort(a,n,sizeof(a[0]),cmp);
    j=0;
    for(i=0;i<n;i++)
    {
        b[j]=a[i];
        if(a[i+1]==a[i])
        {
            c[j]++;
        }
        else{
            j++;
        }

    }

    printf("%d %d",b[k-1],c[k-1]+1);
    return 0;
}