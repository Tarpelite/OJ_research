#include<stdio.h>
int main(){
	int j,i=2,n;
	scanf("%d",&n);
	j=n+1 ;
	while(i<j)
		{
			if(j%i==0){
				j++;
				i=2;
			}
			i++;
		}
	printf("%d",j);
	return 0;

}