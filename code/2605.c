#include<stdio.h>
#include<math.h>
long long f(int k){
		if(k==0||k==1)
		return 1;
		return f(k-1)*k;
	}
int main(){
	int m,n;
	scanf("%d %d",&m,&n);
	long long a=f(m)/(f(m-n)*f(n));
	printf("%d",a);
	return 0;
}