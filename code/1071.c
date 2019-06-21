#include<stdio.h>
int main()
{
	int n,i,j,m,t;
	scanf("%d",&n);

	for(i=n+1;i<1000000;i++){
		t=0;
		for(j=2;j<i;j++){
			m=i%j;
			if(m==0)
				{t=1;
				}
		}
		if(t==0){
			printf("%d",i);
			break;
		}
	}
	return 0;
}