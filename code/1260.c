#include<stdio.h>
int main()
{
	int n,i,j,flag=1;
	scanf("%d",&n);
	for(i=n+1;i<200000;i++){
		flag=1;
		for(j=2;j<=i/2;j++){
			if(i%j==0){
				flag=0;
				break;
			}
		}
		if(flag) break;
	}
	printf("%d\n",i);
	return 0;
}