#include <stdio.h>
#include <stdlib.h>
int zhishu(int n){
	int i=0;
	for(i=1;i<n;i++){
		if(n%i==0&&i!=1)
		    return 0;
	}
	return 1;
}
int main()
{
	int n,i=1;
	scanf("%d",&n);
	for(;;i++){
		if(zhishu(n+i)){ 
		    printf("%d",n+i);
		    return 0;
		    } 
	}
	return 0; 
}