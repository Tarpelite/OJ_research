#include<stdio.h>
int N(int ,int ,int ,int a[]);
int M(int ,int ,int ,int a[]);
int H(int ,int ,int a[]);
int main()
{
    int n,k,r,l;
    scanf("%d%d",&n,&k);
    int a[n];
    int u[k],m[k],h[k];
    int i=0;
    while(i<n){
        scanf("%d",&a[i]);
        i++;
    };
    i=0;
    while(i<k){
        scanf("%d%d",&l,&r);
        u[i]=N(n,l,r,a);
        m[i]=M(n,l,r,a);
        i++;
    };
    for(i=0;i<k;i++) {
        if(u[i]<=m[i]) {l=u[i];r=m[i];}
        else {l=m[i];r=u[i];};
        h[i]=H(l,r,a);
    };
    for(i=0;i<k;i++) {
        printf("%d\n",h[i]);
    };
    return 0;
}
int N(int n,int x,int y,int a[])
{
    int i,j=0;
    for(i=x;i<=y;i++) {
        j=j+a[i];
        j=j%n;
    };
    return j;
}
int M(int n,int x,int y,int a[])
{
    int i,j=1;
    for(i=x;i<=y;i++) {
        j=j*a[i];
        j=j%n;
    };
    return j;
}
int H(int x,int y,int a[])
{
    int i,j;
    j=a[x];
    for(i=x;i<y;i++) {
       j=j^a[i+1];
    };
    return j;
}