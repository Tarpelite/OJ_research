#include <stdio.h>
#include <stdlib.h>
int main(){
	int m,n,sum=1,i,chu=1;
	scanf("%d%d",&m,&n);
	for(i=1;i<=n;i++){
	sum=m*sum;
	m--;
	}
	for(i=1;i<=n;i++){
	chu=chu*i;	
	}
	sum=sum/chu;
	printf("%d",sum);
   

    return 0;
}