#include <stdio.h>
int main(){
	int a,i,j,m=1;
	scanf("%d",&a);
	for(i=a+1;m!=0;i++){
		m=0;
		for(j=2;j<i;j++){
			m=m+(i%j==0);
		}
	}
	i--;
	printf("%d",i);
	return 0;
}