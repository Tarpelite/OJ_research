#include <stdio.h>
long long jiec(int a)
{
    if(a<=1) return 1;
    else return a*jiec(a-1);
}





int main() {
int a,b,sum=1;
scanf("%d%d",&a,&b);

 printf("%lld",jiec(a)/jiec(b)/jiec(a-b));
 
    
	return 0;
}