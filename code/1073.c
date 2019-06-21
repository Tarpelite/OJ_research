#include<stdio.h>
int main()
{
	int str[100001]={0},i;
	int n,k,j;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&j);
		str[j]++;
	}
	scanf("%d",&k);
	for(i=100000;i>=0;i--){
		if(str[i]>0)
			k--;
		if(k==0)
			break;
	}
	printf("%d %d",i,str[i]);
	return 0;
 }