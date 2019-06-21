#include<stdio.h>
#include<math.h>
int panduan(int a)
{
	int m,k=0;
	if(a==1){
		m=0;
		return m;
	}
	else if(a==2){
		m=1;
		return m;
	}
	else{
		for(int i=2;i<a;i++){
			if(a%i==0){
				k++;
			}
		}
		if(k==0){
			m=1;
		}
		else{
			m=0;
		}
		return m;
	}
}
int main(){
	int a,m,k;
	scanf("%d",&a);
	a=a+1;
	while(panduan(a)!=1){
		a++;
	}
	printf("%d",a);
}