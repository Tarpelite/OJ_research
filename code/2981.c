#include<stdio.h>
#define MIN(a,b)(a<=b?a:b)
#define MAX(a,b)(a>b?a:b)
int N(int l,int r,int a[],int m,int n){
int sum=0,i;
i=l;
while(i<=r){
sum=sum+a[i];
i++;}
sum=sum%n;
return sum;
}
int M(int l,int r,int a[],int m,int n){
int sum=1,i;
i=l;
while(i<=r){
sum=(sum*a[i])%n;
i++;}
return sum;
}
int H(int l,int r,int a[],int m){
int sum,i;
if(l!=r){
i=l+1;
sum=a[l];
while(i<=r){
sum=sum^a[i];
i++;}
return sum;
}
else if(l==r){
        sum=a[l];
        return sum;}
}
int main()
{
int n,K,i=0,j=0,min1,max1;
scanf("%d%d",&n,&K);
int a[n];
while(i<=n-1){
scanf("%d",&a[i]);
i++;}
i=0;
int b[K][2];
while(i<=K-1)
{
    j=0;
    while(j<=1)
    {
        scanf("%d",&b[i][j]);
        j++;
    }
    i++;
}
int answer[K];
i=0;
while(i<=K-1){
        min1=MIN(N(b[i][0],b[i][1],a,n,n),M(b[i][0],b[i][1],a,n,n));
        max1=MAX(N(b[i][0],b[i][1],a,n,n),M(b[i][0],b[i][1],a,n,n));
       answer[i]=H(min1,max1,a,n);
    printf("%d",answer[i]);
    printf("\n");
i++;
}
return 0;
}