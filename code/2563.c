#include <stdio.h>

int zhishu(int a);

int main()
{
	int n;
	
	scanf("%d",&n);
	
	int a;
	
	a=n+1;
	
    while(zhishu(a)!=1) a++;
    
    printf("%d",a);
    
    return 0;


}
int zhishu(int a)
{
	int i,x,t=1;
	
	for(i=2;i<a;i++)
	{
		x=a%i;
		
		if(x==0) { t=0;
		break;
	}
	
	else continue;
}

    return t;

}