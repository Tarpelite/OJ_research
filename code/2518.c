#include<stdio.h>
int main(){
	int pnum(int x);
	int n,next;
	scanf("%d",&n);
	while(n<=200000){
		n++;
		next=pnum(n);
		if(next!=1){
			printf("%d",next);
			return 0;
		}
	}
}

int pnum(int x){
	int i;int modx;
	for(i=x-1;i>1;i--){
		modx=x%i;
		if(modx==0){return 1;
		}
	}
	return (x);
}