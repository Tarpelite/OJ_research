#include<stdio.h>
int main()
{
  int a,n,i=2;
  scanf("%d",&a);
  n=a+1;
  while(i!=1){
  i=n-1;
  while(n%i!=0){
  i--;}
  n++;
  }
  printf("%d",n-1);
  return 0;



}