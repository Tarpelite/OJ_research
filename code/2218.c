#include <stdio.h>

int p_num(int num){
	int i,t = 0;
	for(i = 2;i < num / 2 + 1;i++){
		if(num % i == 0){
			t = 1;
			break;
		}
	}
	return t;
}

int main()
{
	int n;
	int a;
	
	scanf("%d",&n);
	
	for(a = n + 1;p_num(a);a++);
	
	printf("%d",a); 

    return 0;
}