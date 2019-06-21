#include<stdio.h>
int isprime(int x);

int main(){
	int i, n, re = 0;
	
	scanf("%d", &n);
	
	i = n;
	while(re<=1){
		i++;
		re = isprime(i);
	}
	
	printf("%d", re);
	
	return 0;
}

int isprime(int x){
	int j, cnt = 0, t;
	t = x%10;
	if(t!=1 && t!=3 && t!=7 && t!=9) return 1;
	else{
		for(j=2;j<x;j++){
			if(x%j == 0) cnt++;	
		}
		if(cnt == 0) return x;
		else return 1;
	} 
	
}