#include <stdio.h>
int main()
{
	int m,n;
	
	scanf("%d%d",&m,&n);
	
	int sum;
	sum=m;
	for(int i=1;i<n;i++){
		sum=sum*(m-i);
	}
	
	for(int j=1;j<=n;j++){
		sum=sum/j;
	}
	printf("%d\n",sum);
	
	return 0;
}