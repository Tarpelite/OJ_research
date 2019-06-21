#include<stdio.h>
int main()
{
	int n,i,j,a,b;
	scanf("%d",&n);
	for(i=0,j=n+1;i==0;j++){
		i=0;
		for(a=2,b=0;a<=j-1;a++){
			if(j%a==0)
			b++;}
			if(b==0){
			printf("%d",j);
			i=1;}
		
	}
	return 0;
}