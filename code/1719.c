#include<stdio.h>
int main(){
	int n,a;
	scanf ("%d",&n);
	n=n+1; 
	while (n>2){
		a=2;
		while (n%a!=0){
			a=a+1;
		}
		if (a!=n) n++;
		else break;
	}
	printf ("%d",n);
	return 0;
}