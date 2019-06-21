#include<stdio.h>
int main(){
	int m,n,x=1,y=1,i,c=0;
	scanf("%d%d",&m,&n);
	for(i=1;i<=n;i++)
		y = y*i;
	for(i=m;i>0;i--){
		x = x*i;
		c++;
		if(c==n)
		break;
	}
	printf("%d",x/y);
}