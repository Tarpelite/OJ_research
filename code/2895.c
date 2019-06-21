#include<stdio.h>
int f(int x){
	int k;
	if(x==2)
	  return 1;
	for(k=3;k<x;k++)  
	  if(x%k==0)  return 0;
	return 1;
}
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=n+1;;i++){
		if(f(i))  break;
	}
	printf("%d",i);
	return 0;
 }