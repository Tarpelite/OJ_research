#include<stdio.h>
#include<math.h>
int ss(int n)  
{
    if (n <= 1) return 0;
    if (n % 2 == 0) return n == 2; 
 
    for (int i = 3; ; i += 2)
    {
        if (i > n/i) break;  
        if (n % i == 0) return 0;
    }
    return 1;
}
int main(){
	int a;
	scanf("%d",&a);
	a++;
	
	while(ss(a)!=1){a++;
	}
	printf("%d",a);
	return 0;
	
	
	
	
	
}