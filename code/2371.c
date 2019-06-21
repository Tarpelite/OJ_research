#include<stdio.h>
long long int JH(int x){
	long long int JH=1;
	for(int i=1;i<=x;i++){
		JH=JH*i;
	}
	return JH;
}
int main(){
	int m,n,o;
	scanf("%d%d",&m,&n);
	if(m>1){
		o=JH(m)/(JH(n)*JH(m-n));
	}
	if(m==0||n==0)
		o=0;
	if(m==1 && n!=0)
	    o=1;
	printf("%d\n",o);
	return 0;
}