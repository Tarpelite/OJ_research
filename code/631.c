#include<stdio.h>
int main()
{
	int a[100000],i,j,p,k=2,n;
	a[1]=2;
	for(i=3;i<=100010;i++){
		p=0;
		for(j=2;j<=i/2;j++){
			if(i%j==0){
				p=1;
				break;
			}
		}
		if(p==0){
			a[k]=i;
			k++;
		}
	}
	scanf("%d",&n);
	for(i=1;i<=100000;i++){
		if(n==a[i]){
			printf("%d",a[i+1]);
			break;
		}
	}
	return 0;
}