#include<stdio.h>
#include<math.h>
int prime_num(int x){
	int i,a,b=0;
	a=(int)sqrt((double)x);
	for(i=2;i<=a;i++){
		if(x%i==0)
		break;
	}
	if(i>a)
	return x;
	else
	return 1;
}
int main(void){
	int n,j,answer;
	scanf("%d",&n);
	for(j=n+1;j<=199999;j++){
		answer=prime_num(j);
		if(answer==1)
		continue;
		else 
		break;
	}
	printf("%d",answer);
	return 0;
}