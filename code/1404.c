#include<stdio.h>
int main()
{
	int n,i,j,m;
	scanf("%d",&n);
	for(i=n+1;;i++){
		m=0;
		for(j=1;j<=i;j++){
			if(i%j==0){
				m++;
			}
		}
		if(m==2) break;	
	}
	printf("%d",i);
	return 0;
}