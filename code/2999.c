#include <stdio.h>
int c[1000000];

int main(){
	int n,k,i,a,max;
	
	scanf("%d",&n);
	max=-1;
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		c[a]++;	
		if(max<a) max=a;	
	}
	
	scanf("%d",&k);
	a=0;
	
	for(i=max;i>=0;i--)
	{
		if(c[i]>0){
			a++;
			if(k==a) {
				printf("%d %d",i,c[i]);	
				break;
			}	
		}
	}
	return 0;
}