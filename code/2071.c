#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int m,n;
	int i,j,k;
	int a,b,c;
	scanf("%d%d",&m,&n);
	j =1;
	for (k=1;k<=n;k++)
	j = j*(m-n+k)/k;
	
	printf("%d",j); 	
	
	
	return 0;
}