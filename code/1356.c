#include<stdio.h>
#include<stdlib.h>
int nums[10000000];
int cmp(const void *a,const void *b)
{
    return *(int *)b-*(int *)a;
}
int main()
{
    int n,i,k,j,m,count=0,temp=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&nums[i]);
    scanf("%d",&k);
    qsort(nums,n,sizeof(0),cmp);
    for(i=0;;i++)
    {
        if(nums[i]==nums[i+1])
            continue;
        else
            temp++;
        if(temp==k)
        {
            i++;
            break;
        }
    }
    printf("%d ",nums[i]);
    for(j=0;j<n;j++)
    {
        if(nums[j]==nums[i])
            count++;
    }
    printf("%d",count);
    return 0;
}