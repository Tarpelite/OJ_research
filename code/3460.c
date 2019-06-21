#include <stdio.h>
int zhishu(int num)
{
    int a=0,i=2; 
    for(i=2;i<num;i++){
        if(num%i==0)a++;
    }
    if(a==0)
	return 1;
    else return 0; 
} 
int main()
{
	int n;
	scanf("%d",&n);
	n++;
	for(;zhishu(n)!=1;n++);	
	printf("%d",n);
 }