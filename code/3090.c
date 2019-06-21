#include <stdio.h>
#include <stdlib.h>
int a[10000005]={0};
int cmp(const void*a,const void*b)
{
    return *(int*)a-*(int*)b;
}

int main()
{
    int n,k=0,c=0;
    int i=0,j=0;

    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    qsort(a,n,sizeof(a[0]),cmp);
    j=0;
    for(i=n-1;i>0;i--){
        if(a[i]>a[i-1]){
            j++;
            if(j==k){
                printf("%d ",a[i]);
                break;
            }
        }
    }
    for(j=i;j<n;j++){
        if(a[j]==a[i])
            c++;
    }
    printf("%d\n",c);
    return 0;
}