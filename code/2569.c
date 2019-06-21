#include<stdio.h>
int main()
{
	int a[100000]={},n,k,i=0,j=0,m,l;
	scanf("%d",&n);
	while(i<n){
		scanf("%d",&m);
		a[m]++;
		i++;
	}
	i=0;
	while(i<100000){
		if(a[i]!=0){
			l=i;
		}
		i++;
	}
	scanf("%d",&k);
	i=l,j=0;
	while(i>0 && j<k){
		//printf("!%d\n",i);
		if(a[i]>0)	j++;
		i--;
	}
	printf("%d %d",i+1,a[i+1]);
	return 0;
	}