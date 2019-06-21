#include <stdio.h>
int main(){
	int m,n,s=1,t;
	scanf("%d %d",&m,&n);
	if (n==0)
	    printf("0");
	else{
	t=n;
	while (n>0){
		s*=m;
		n--;
		m--;
	}
	while (t>0){
		s/=t;
		t--;
	}
	printf("%d",s);
}
	return 0;
}