#include<stdio.h> 
int N(int l,int r,int n,int *arr) 
{ int sum=0; 
for(int i=l;i<=r;i++) 
sum+=arr[i]%n; 
sum=sum%n;
 return sum; } 

int M(int l,int r,int n,int *arr) 
{ int num=1;
 for(int i=l;i<=r;i++) 
num=(num*arr[i])%n; 
num=num%n; 
return num; }

 int H(int l,int r,int *arr)
 { int res=arr[l];
 for(int i=l+1;i<=r;i++) 
res=res^arr[i]; 
return res; }

 int main()
 { int n,K; int arr[100]; 
scanf("%d%d",&n,&K); 
for(int i=0;i<n;i++) 
scanf("%d",&arr[i]); 
for(int i=0;i<K;i++) 
{ int l,r; scanf("%d%d",&l,&r);
 int num_m=M(l,r,n,arr);
 int num_n=N(l,r,n,arr); 
int max=num_m>num_n?num_m:num_n;
 int min=num_m+num_n-max;
 printf("%d\n",H(min,max,arr)); }
 return 0; }