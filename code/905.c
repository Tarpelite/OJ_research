#include<stdio.h>
int N(int l,int r,int a[],int n){
    int t,i;
    for(i=l,t=0;i<r+1;i++){
        t=t+a[i];
    }
    t=t%n;
    return t;
}
int M(int l,int r,int a[],int n){
    int t,i;
    for(i=l,t=1;i<r+1;i++){
        t=(t*a[i])%n;
    }
    t=t%n;
    return t;
}
int max(int a,int b){
    if(a>b)
        return a;
    else
        return b;
}
int min(int a,int b){
    if(a<b)
        return a;
    else
        return b;
}
int H(int l,int r,int a[]){
    int i,t;
    for(i=l+1,t=a[l];i<r+1;i++){
        t=t^a[i];
    }
    return t;
}
int main()
{
    int n,k,l,r,a[110],x,y,g,h,i;
    scanf("%d%d",&n,&k);
    int z[k];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<k;i++){
        scanf("%d%d",&l,&r);
        x=N(l,r,a,n);
        y=M(l,r,a,n);
        g=min(x,y);
        h=max(x,y);
        z[i]=H(g,h,a);
    }
    for(i=0;i<k;i++){
        printf("%d\n",z[i]);
    }
    return 0;
}