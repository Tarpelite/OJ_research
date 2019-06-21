#include <stdio.h>
int is_zs(int);
int main()
{
	int a,i;
	scanf("%d",&a);
	for (i=a+1;i<=110000;i++){
		if (is_zs(i)){
			printf("%d",i);
			return 0;
		}
	}
	return 0;
}
int is_zs(int x)
{
	int i;
	if (x==2){
		return 1;
	}
	else
	{
		for (i=2;i<=x/2+1;i++){
			if (x%i==0){
				return 0;
			}
		}
	}
	return 1;
}