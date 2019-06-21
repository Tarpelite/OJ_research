#include<stdio.h>
int main()
{
	int a[100001]={};
	int n,m,k,i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
	  scanf("%d",&m);
	  a[m]++;}
	  scanf("%d",&k);
	  for(i=100000;i>=0;i--)
	  {
	  	if(a[i]>0)
	  	k--;
	  	if(k==0)
	  	break;
	  	
	  }
	  printf("%d %d\n",i,a[i]);
	  return 0;
 }