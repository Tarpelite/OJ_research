#include<stdio.h>
int zhushu(int a){
	int i,yushu,sum=0;
	for(i=a-1;i>=2;i--){
		yushu=a%i;
		if(yushu==0)
		{
			sum=1;break;
		}
	}
	return sum;//1不是质数 
}
int main(){
	int a,b,c;
	scanf("%d",&a);
	for(b=a+1;;b++){
		 c=zhushu(b);
		 if(c==0)
		 break;
	}
	printf("%d",b);
	return 0;
}