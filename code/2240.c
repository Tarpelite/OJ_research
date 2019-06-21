#include <stdio.h>
int prime(int a){
	int i;
	for(i = 2;i < a && (a%i) != 0;i++){
	}
	if(i == a) return 1;
	else return 0;
}
int main()
{
	int a,i;
	scanf("%d",&a);
	for(i = a + 2;i <= 200000;i = i + 2){
	if(prime(i) == 1){
	printf("%d\n",i);
	break;
	}
	}
	return 0;
	}