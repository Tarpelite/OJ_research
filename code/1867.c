#include <stdio.h>
#define MAX(a,b) ((a) > (b) ? (a) : (b))
#define MIN(a,b) ((a) < (b) ? (a) : (b))
int data[101]={0},ans[101]={0},data2[101]={0};
int N(int n,int l,int r){
int sum=0;
for(int i=l;i<=r;i++){
    sum+=data[i];
}
return sum%n;
}

int M(int n,int l,int r){
int time=1;
for(int i=l;i<=r;i++){
    data2[i]=data[i]%n;
    time*=data2[i];
    if(time>=10000){
        time%=n;
    }
}
time%=n;

return time;
}

int H(int l,int r){
int yihuo=data[l];
for(int i=l+1;i<=r;i++){
    yihuo^=data[i];
}
return yihuo;
}


int main(){
int n,k,l,r,i,j;
scanf("%d%d",&n,&k);
for(i=0;i<n;i++){
    scanf("%d",&data[i]);
}
for(j=1;j<=k;j++){
    scanf("%d%d",&l,&r);
    ans[j]=H(MIN(N(n,l,r),M(n,l,r)),MAX(N(n,l,r),M(n,l,r)));
}
for(j=1;j<=k;j++){
    printf("%d\n",ans[j]);
}
return 0;
}