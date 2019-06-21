#include <stdio.h>
int main(){
	int m,n,i,sum=1;
	scanf("%d%d",&m,&n);
 if(n==0){
   putchar('0');
   return 0;     
 }
	for(i=1;i<=n;i++){
		sum*=m;
		sum/=i;
		m--;
	}
	printf("%d",sum);
	return 0;
}