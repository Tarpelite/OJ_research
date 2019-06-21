#include<stdio.h>
int main()
{
	int n,i,r,x,y;
	scanf("%d",&n);
	for(i=n+1;i<=200000;i++){
		x=0;
		for(r=2;r<i;r++){
			if(i%r==0){
				x=1;
			}
		}
		if(x==0){
				printf("%d\n",i);
				break;
			}
	}
	return 0;
}