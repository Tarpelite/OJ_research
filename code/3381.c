#include<stdio.h>
#include<math.h>
int judge(int x){
	if (x==2||x==3) return 1; 
	int k=1;
	for(int i=2;i<=sqrt(x);i++){
		if (x%i==0) k=0;
	}
	return k;
}

int main(){
	int n;
	int k=1;
	scanf("%d",&n);
	while (k){
		n++;
		if(judge(n)) k=0;
	}
	printf("%d",n);
	return 0;
}