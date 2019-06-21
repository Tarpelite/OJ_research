#include <stdio.h>
int N(int a[],int n,int l, int r){
    int i,sum=0,re;
    for(i=l;i<=r;i++){
        sum+=a[i];
        re=sum%n;
    }
    return re;
}
int M(int a[],int n,int l, int r){
    int i,sum=1,re;
    for(i=l;i<=r;i++){
        sum*=a[i]%n;
        if (sum>n)sum=sum%n;
        re=sum%n;
    }
    return re;
}
int H(int a[],int l, int r){
    int i,sum=a[l];
    for(i=l;i<r;i++){
        sum=sum^a[i+1];
    }
    return sum;
}
int main(){
int n,k,i,re1,re2,re;
scanf("%d%d",&n,&k);
int a[2*n],b[2*k],c[2*k];
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
for(i=0;i<k;i++){
    scanf("%d%d",&b[i],&c[i]);
}
for(i=0;i<k;i++){
    re1=N(a,n,b[i],c[i]);
    re2=M(a,n,b[i],c[i]);
    re=H(a,re1>re2?re2:re1,re1>re2?re1:re2);
    printf("%d\n",re);
}
return 0;
}