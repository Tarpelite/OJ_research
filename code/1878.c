#include<stdio.h>
int main()
{
	int n,i,x,a,count=0,b=1;
	
	scanf("%d",&n);
	
	i=1;
	while(b!=0){
		count=0;
		
		for(x=2;x<n+i;x++){
			a=(n+i)%x;
			if(a==0)
			count++;
		}
		i++;
		b=count;
	}
	
	printf("%d",n+i-1);
	return 0;
}