#include<stdio.h>
int sum(int,int);

int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	int total;
    total=sum(m,n);
    printf("%d",total);
	
	
	return 0;
}

int sum(int a,int b)
{
	if(a<b||a<1||b<1)
	    return 0;
	if(b==1)
	    return a;
	if(a==b)
	    return 1;
	else
	    return sum(a-1,b)+sum(a-1,b-1);
}