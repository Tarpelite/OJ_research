#include<stdio.h>
 int main (){
int n;
int a[100001]={0};
int k;
int i;
scanf("%d",&n);
while(n--){
scanf("%d",&i);
a[i]++; }
 scanf("%d",&k);
 for(i=99999;i>0;i--){
if(a[i]!=0){k--;
if(k==0){printf("%d %d",i,a[i]);break; }
}}return 0;}