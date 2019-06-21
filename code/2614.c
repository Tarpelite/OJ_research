#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int f(int n){
	int x=1,j;
	if(n==2){x=1;}
	else if(n==3){x=1;}
	else {for(j=2;j<=sqrt(n);j++){
		if(n%j==0){x=0;break;}
	}
	return x;
	}
}



int main() {
	int n,i,j;
	scanf("%d",&n);
	for(i=n+1;;i++){
		if(f(i)==1||f(i)==2||f(i)==3)
		break;
	}
	printf("%d",i);
	return 0;
}