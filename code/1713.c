#include<stdio.h>
int zs(int x);
int main(){
	int a,i;
	scanf("%d",&a);
	i=a+1;

	while(zs(i)!=1){
		i++;
	}
	printf("%d",i);
	return 0;
}
int zs(int x){
	for(int a=2;a<=x/2;a++)
		if(x%a==0) return 0;
	    return 1;
	
}