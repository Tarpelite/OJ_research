#include<stdio.h>
int main(){
	int n,a,i,j;
	scanf("%d",&n);
	for(i=n+1;;i++){
		for(j=2;j<i;j++){
			a=i%j;
			if(a==0)
			break;
		}
		if(j==i)
		break;
	}
	printf("%d",i);
	return 0;
}