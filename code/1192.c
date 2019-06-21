#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int cmp ( const void *a , const void *b )
{
  return *(int *)a - *(int *)b;
}
int main()
{
    int n,K;
    while(scanf("%d",&n)!=EOF){
    int a[n];
    for(int j=0;j<n;j++)
        scanf("%d",&a[j]);
    scanf("%d",&K);
    qsort(a,n,sizeof(a[0]),cmp);
    int i=0;
    for(int j=0;j<n;j++)
    {
        if(a[j]!=a[j+1])
            i++;
    }
    int b[i],k=1;
    b[0]=a[0];
    for(int j=0;j<n;j++)
    {
        if(a[j]!=a[j+1])
        {
            b[k]=a[j+1];
            k++;
        }
    }
    int cs=0;
    for(int j=0;j<n;j++)
    {
        if(a[j]==b[i-K])
            cs++;
    }
    printf("%d %d\n",b[i-K],cs);}
    return 0;
}