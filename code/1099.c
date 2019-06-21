# include <stdio.h>
# include <math.h> 
int isprime(int m) {
	int i,k;
	k=(int)sqrt(m);
	for(i=2; i<m; ++i) {
		if(m%i==0)
			return 0;
	}
	return 1;
}
int main()
{
	int a;
	scanf("%d",&a);
	for(++a;isprime(a)==0;++a);
	printf("%d",a);
	return 0;
}