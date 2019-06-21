#include<stdio.h> 
int N(int l,int r,int n,int *arr) { 
int sum=0;
 int i; 
for(i=l;i<=r;i++) 
sum+=arr[i]%n; 
sum=sum%n; 
return sum; 
} 
int M(int l,int r,int n,int *arr) { 
int num=1; 
int i;
 for(i=l;i<=r;i++) 
num=(num*arr[i])%n;
 num=num%n;
 return num; 
} 
int H(int l,int r,int *arr) {
 int res=arr[l], i;
 for(i=l+1;i<=r;i++)
 res=res^arr[i];
 return res; }
 int main() {
 int n,K;
 int arr[100]; 
int i; 
scanf("%d%d",&n,&K); 
for(i=0;i<n;i++) 
scanf("%d",&arr[i]); 
for( i=0;i<K;i++) {
 int l,r; 
scanf("%d%d",&l,&r); 
int b=M(l,r,n,arr); 
int c=N(l,r,n,arr);
 int temp; 
if (b>c){
 temp =b; 
b=c; 
c= temp; 
} 
printf("%d\n",H(b,c,arr));
 }
 return 0; 
}