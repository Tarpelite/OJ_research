#include<stdio.h>
#include<math.h>
int isprime(int num)
{
    int a=1;
    int i;
    for(i=2;i<num/2;i++){
        if(num%i==0){
       a=0;
        }
    }
    return a;
}
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=n+1;i<2000000;i++){
       if(isprime(i)){
        printf("%d",i);
        break;
       }
	}


	return 0;
}