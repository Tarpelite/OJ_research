#include <stdio.h>

int la(int ha);
int main()
{
	int a,b,c;
	int i,j;
	scanf("%d",&a);
	b=a;
	while(1){
		b=b+1;
		c=la(b);
		if(c==2)
			break;
	}
	printf("%d",b);
	return 0;
}

int la(int ha){
	int i=0,xi;
	if(ha==2){
		return 2;
	}
	for(i=ha-1;i>1;i--){
		xi=ha%i;
		if(xi==0){
			return 1;
		}
		else if(i==2)
		    return 2;
		
	}
}