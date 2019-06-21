#include <stdio.h>
#include <stdlib.h>

int main() {
	int n,i,m;
	scanf("%d",&n);
	
	for(m=n+1; ;m++){
		for(i=2;i<=m-1;i++){
			if(m%i==0){
				break;
			}
		}
		if(i>m-1){
			printf("%d",m);
			break;
		}
	}
	return 0;
}