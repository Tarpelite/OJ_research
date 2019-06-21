#include<stdio.h>
#include<math.h>
int judge(int x){
	for(int i=2;i<=sqrt(x);i++){
		if(!(x%i)) return 0;
	}
	return 1;
}

int main(){
	int n;
	scanf("%d",&n);
    n++;
	while(1){
		if(judge(n)) break;
		n++;
	}
	printf("%d\n",n);
	return 0;
	
	
}