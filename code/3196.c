#include <stdio.h>
int is(int);
int a(int);

int main(){
	
	int n,p;
	scanf("%d",&n);
	p=n+1;
	p=a(p);
	printf("%d",p);
	return 0;
}

int a(int x){
	while (1){
		if (is(x))
		    return x;
		x++;
	}
	
}

int is(int x){
	int i=x-1;
	while (i>1){
		if (x%i==0)
		    return 0;
		i--;
	}
	return 1;
}