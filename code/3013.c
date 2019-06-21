#include <stdio.h>
int f(int x){
	int i;
	if(x==1)
	return 0;
	for(i=2;i*i<=x;i++)
		if(x%i==0)
		return 0;
	return 1;	
}
int main(){
int n,i;
scanf("%d",&n);
for(i=n+1;i<=1000000;i++){
	if(f(i)){
	printf("%d\n",i);
	break;
	}
}
    return 0;
}