#include<stdio.h>
#include<math.h>
int main(){
	int n,m,i;
	m=0;
	double y;
	scanf("%d",&n);
	if (n==2)
	printf("3");
	else{	
	int x=n;
	while (m==0){
		x=x+2;
		i=3;
		m=1;
		y=sqrt(x)+1;
		while (i<y){
		if(x%i==0)
		m=0; 
		i=i+2;
	}
}
	printf("%d",x);
	return 0;}
}