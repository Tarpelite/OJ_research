#include<stdio.h>
#include<math.h>
int w(int n)
{
	int i=1;
	double k;
	k=sqrt(n);
	while(++i<=k){
		if(n%i==0){
			return 0;
			break;
		}
	}
	if(i>k) return 1;
} 
int main()
{
	int n,i,x,j;
	scanf("%d",&n);
	if(n==2) x=3;
	else for(i=1;i<=100000;i++){
		x=n+i;
		if(w(x)==1) break;
		else continue;
	}
	printf("%d",x);
	return 0;
}