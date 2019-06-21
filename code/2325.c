#include <stdio.h>
#define max(a,b) a>b?a:b
#define min(a,b) a<b?a:b

int a[10000+20];

int id_n(int l,int r);
int id_m(int l,int r);
int id_h(int l,int r);
int n;

int main(){
    int K,i,data_n,data_m,l,r;
    scanf("%d%d",&n,&K);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    while(K--){
        scanf("%d%d",&l,&r);
        data_n=id_n(l,r);
        data_m=id_m(l,r);
        printf("%d\n",id_h(min(data_n,data_m),max(data_n,data_m)));
    }
    return 0;
}

int id_n(int l,int r){
    int ans=0,i;
    for(i=l;i<=r;i++){
        ans+=(a[i]%n);
        ans%=n;
    }
    return ans;
}

int id_m(int l,int r){
    int ans=1,i;
    for(i=l;i<=r;i++){
        ans*=(a[i]%n);
        ans%=n;
    }
    return ans;
}

int id_h(int l,int r){
    int ans=a[l],i;
    for(i=l+1;i<=r;i++){
        ans=ans^a[i];
    }
    return ans;
}