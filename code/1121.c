#include<stdio.h>
#define MAX 100000
int main(){
int n,k,x;
int arr[MAX]={0};
scanf("%d",&n);
for(int i=0;i<n;i++)
{ scanf("%d",&x);
arr[x]++;}
scanf("%d",&k);
int place=0;
int i=MAX-1;
for(;i>=0;i--)
{ if(arr[i]==0) continue;
place++; 
if(place==k) break; } 
printf("%d %d",i,arr[i]);
return 0;
 }