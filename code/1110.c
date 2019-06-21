#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int isprime(int n){
	int i,t=0;
	for(i=1;i<=n;i++){
		if(n%i==0)t++;
	}
	if(t==2) return 1;
	else return 0;
}

int main() {
    int n,m;
    scanf("%d",&n);
    m=n+1;
    while(1){
       if(isprime(m)){
       	printf("%d",m);
       	break;
	   }
	   m++;
	}
	return 0;
}