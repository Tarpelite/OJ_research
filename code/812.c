#include<stdio.h>
int main()
{
	int n;
	int m;
	int i=2,j;
	int flag=1;
	scanf("%d",&n);
	m=n+1;
	for (i=2;i<m;i++){
		if (m%i==0){
			m++;
			i=2;
		}
	}
	if (flag==1){
		printf("%d",m);
	}
	return 0;
}