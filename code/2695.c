#include<stdio.h>
int main()
{
    int n,K,q=0,i,j,g,h;
    scanf("%d %d",&n,&K);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    while(q<K){
    scanf("%d%d",&g,&h);
    int k=0,l=1;
    for(i=g;i<=h;i++){
        k=k+a[i];
        l=(l*a[i])%n;
    }
    k=k%n;
    l=l%n;
    if(k>l)
    {
        j=k;
        k=l;
        l=j;
    }
    j=a[k];
    for(i=k;i<l;i++){
        j=j^a[i+1];
    }
    printf("%d\n",j);
    q++;
    }
    return 0;
}