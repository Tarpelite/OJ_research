#include <stdio.h>
#include <stdlib.h>
int arr[10000000];
int n;
int comp(const void*a,const void*b)
{
    return *(int *)b - *(int *)a;
}
int main()
{
    int i,j,k,count=0,sort=1,re;
    scanf("%d",&n);
    for(i=0;i<n;++i)
        scanf("%d",&arr[i]);
    scanf("%d",&re);
    qsort(arr,n,sizeof(int),comp);
    j = arr[0];
    for(i=1;i<n;++i){
        if(arr[i]!=j){
            k = j;
            j = arr[i];
            ++sort;
        }
        if(sort==re)
            ++count;
        if(sort>re)
            break;
    }
    printf("%d %d\n",k,count);
    return 0;
}