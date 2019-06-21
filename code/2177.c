#include<stdio.h>;
int ljj(int a){
	if(a==1)
	return 1;
	else
	return a*ljj(a-1);
}
int spt(int a,int b){
	int i,c;
	c=a;
	for(i=1;i<b;i++){
		a=a*(c-1);
		c--;
	}
	return a;
}
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	a=spt(a,b);
	b=ljj(b);

	printf("%d",a/b);
	return 0;
}