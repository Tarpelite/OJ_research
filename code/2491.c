#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int m,n;
	scanf("%d%d",&m,&n);
	int i=1,a=1,b=1,c;
	while(i<=n){
		a=a*m;
		m=m-1;
		i++; 
	}
	i=1;
		while(i<=n){
		b=b*i;
		i++; 
	}
	c=a/b;
	printf("%d",c);
	
	
	return 0;
}