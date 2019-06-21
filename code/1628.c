#include<stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	i=n+1;
	while(1){
		for(j=2;j<i;j++){
			if(i%j==0){
				break;
			}
			else{
				continue;
			}
		}
		if(j==i){
			printf("%d",i);
			return 0;
		}
		else
		i++;
	}
}