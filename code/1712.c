#include<stdio.h>
#include<math.h>
#include<string.h>
long long int jc(int);

int main()
{
	int m, n;
	long long int a;
	scanf("%d%d", &m, &n);
	if(m > n){
	
	a = jc(m)/(jc(m - n)*jc(n));}
	else if(m == n){
		a = 1;
	}
	
	printf("%d", a);
	return 0;
}
//Funtion
long long int jc(int m)
{
	int o;
	long long int flag;
	flag = m;
	for(o = m - 1;o>0;o--){
		flag = flag*o;
	}
	return flag;
	
}