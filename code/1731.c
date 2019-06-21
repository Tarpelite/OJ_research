#include <stdio.h>
#include <stdlib.h>
int a[10000000],c[100000];
int com(const void *a,const void *b)
{
    return *(int*)b-*(int *)a;
}
int main()
{
    int n,k,i,j,m;
    scanf("%d",&n);
    for(i=0;i<n;i++)scanf("%d",&a[i]);
    scanf("%d",&k);

    qsort(a,n,sizeof(a[0]),com);
    c[0]=a[0];
    j=1;

    for(i=1;i<n;i++){
        if(a[i]!=a[i-1]){
            c[j]=a[i];
            j++;
        }
    }
    j=0;
    for(i=0;i<n;i++){
        if(c[k-1]==a[i])j++;
    }

    printf("%d %d",c[k-1],j);
    return 0;
}