#include<stdio.h>
#include<stdlib.h>
int cmp(const void*a,const void *b)
{
    return *(int *)b-*(int *)a;
 }
int main()
{
    int n,i,x=0,y=0,k,cnt=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    qsort(a,n,sizeof(a[0]),cmp);
    scanf("%d",&k);
    for(i=0;i<n;i++)
        {
            if(a[i]!=a[i+1])
        {
            y++;
             }
    if(k==y) {
            x=i; break;
    }
    }
    for(i=0;i<n;i++)
        { if(a[i]==a[x])cnt++;
    }
    printf("%d %d",a[x],cnt);
     }