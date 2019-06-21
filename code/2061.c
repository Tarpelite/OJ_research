#include<stdio.h>
#include<stdlib.h>
int compare (const void * a, const void * b)
{
    return ( *(int*)b - *(int*)a);
}

int main()
{
    int n,k,i,j,tep;
    scanf("%d", &n);
    int a[n],b[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d", &k);
    qsort (a, n, sizeof(int), compare);
    tep=a[0];
    for(i=1,j=1;i<k;j++)
    {
        if(a[j]!=tep)
        {
            tep=a[j];
            i++;
        }

    }
    for(i=1;;i++)
    {
        if(a[j]!=tep) break;
        j++;
    }
    printf("%d %d", tep, i);
    return 0;
}