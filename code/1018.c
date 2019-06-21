#include<stdio.h>
#include<stdlib.h>
int cmp(const void *a,const void *b){
    return *(int *)b-*(int *)a;
}
int a[10000001],b[10000001];
int main()
{
    int n,i,j=1,k,x,num=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d",&k);
    qsort(a,n,sizeof(a[0]),cmp);//数组从大到小
    b[0]=a[0];
    for(i=1;i<n;i++){
        if(a[i]!=a[i-1]){
            b[j]=a[i];
            j++;
        }
    }
    x=b[k-1];
    for(i=0;i<n;i++){
        if(a[i]==x){
            num+=1;
        }
    }
    printf("%d %d",x,num);
}