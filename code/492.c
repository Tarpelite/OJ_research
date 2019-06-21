#include<stdio.h>
int f(int n)
 {
    int a = 0;
    int num;
    for (int i=2; i <n;i++){
        if (n % i == 0)
            a++;
        }
   if (a==0)
   num =1;
   else
   num=0;
   return num;
    }
int main()
{
	int prime,y;
	scanf("%d",&prime);
	y = f(prime+1);
	while(y!=1){
		prime++;
		y = f(prime+1);
	}
	printf("%d",prime+1);
	return 0;
 }