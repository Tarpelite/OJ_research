#include<stdio.h>

int main(){
	int m,n;
	int i;
	int up,down;
	scanf("%d %d",&m,&n);
	for(up=1,i=1;i<=n;i++,m--){
		up=up*m;
	}
	for(down=1,i=1;i<=n;i++){
		down=down*i;
	}
	printf("%d",up/down);
	return 0;
}