#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	j=n+1;
	while(i!=j-1){
		for(i=2;i<=j-1;i++){
			if(j%i==0)break;
		}
		j++;
	}
	j--;
	printf("%d",j);
}