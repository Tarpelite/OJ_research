#include<stdio.h>
int a[2000];
int zhi(int i);
int main()
{
	int n;
	scanf("%d",&n);
	n++;
	while(zhi(n)==0)n++;
	printf("%d",n);
}
int zhi(int x){
	int i;
	int f=1;
	for(i = 2;i<=x/2;i++){
		if(x%i == 0){
			f = 0;
			break;
		}
		else continue;
	}
	if(f == 0)return 0;
	else return 1;
}