#include<stdio.h>
int f(int n){
	int i;
	int jiechen=1;
	for(i=1;i<n+1;i++){
		jiechen=jiechen*i;
	}
	return jiechen;
}
int main(){
int n,m,result,in=1,i;
scanf("%d%d",&m,&n);

if(n==0){
	printf("0\n");
}
else{
	for(i=m-n+1;i<m+1;i++){
		in=in*i;
	}
printf("%d\n",in/f(n));
return 0;	}
}