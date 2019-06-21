#include<stdio.h>
int main()
{
  int n,a[100001]={0},i,j,k,b,c;
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    scanf("%d",&b);
    a[b]++;}
  scanf("%d",&c);
  k=0;
  j=100000;
 while(k!=c){
    if(a[j]==0){
    j--;}
    else if(a[j]!=0){
    k++;
    j--;}}
    printf("%d %d",j+1,a[j+1]);
    return 0;
    }