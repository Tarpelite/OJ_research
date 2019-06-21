#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
int i; 
int isz(int n) {
	if (n==2) {
		return 1;
	}
	for (i=2; i<=sqrt(n); i++) {
		if(n%i==0)
			return 0;
	}
	return 1;
}
int main () {
	int a,ij;
	scanf("%d",&a);
	for(ij=a+1;;ij++) {
		if(isz(ij)) {
			printf("%d",ij);
			return 0;
		}
	}
	return 0;
}