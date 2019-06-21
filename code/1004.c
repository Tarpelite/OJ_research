#include <stdio.h>

int main()
 {
 	int a[100001]={0};
 	int n,i,k,num=0;
 	scanf("%d",&n);
 	for(i=0;i<n;i++)
 	{
 		scanf("%d",&k);
 		a[k]++;
	 }
	 scanf("%d",&k);
	 for(i=100000;i>0;i--)
	 {
	 	if(a[i]!=0)
	 	num++;
	 	if(num==k) break;
	 	
	 }
	 printf("%d %d",i,a[i]);
	return 0;
}