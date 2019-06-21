#include <stdio.h>
int a(int num)
{
    int a=0;  
    for(int i=2;i<num;i++)
	{
        if(num%i==0){
            a++;  
        }
    }
    if(a==0)
	{
        return num;
    }
	else
	{
        return 0;
    }
}

int main ()
{
	int m,n;
	scanf("%d",&m);
	for(;n<2;)
	{
		m+=1;
		n=a(m);
		
	}

	printf("%d",n);
}