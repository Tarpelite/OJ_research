#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
int cmp(const void *a,const void *b)
{
    return *(int *)b-*(int *)a;
}
int main()
{
    int n,i,k,flag=0,ki;
    int *a=(int *)malloc(10000000*sizeof(int));
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    qsort(a,n,sizeof(a[0]),cmp);

    for(i=1;i<n;i++)
    {
        if(a[i]<a[i-1])
        {
            flag++;
            if(flag==k-1)
            {
                ki=i;
                break;
            }
        }
    }
    int cishu=1;
    for(i=ki+1;i<n;i++)
    {
        if(a[i]==a[ki])
            cishu++;
    }
    printf("%d %d",a[ki],cishu);
    free(a);
    return 0;
}