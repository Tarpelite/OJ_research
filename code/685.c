#include <stdio.h>
#include<math.h>

int main() {
	int a,b,i,n,j,k,c,m;
	double d,e,f;
	scanf("%d",&n);
	for(i=n+1;i<=1000000;i++)
	{	m=0;
		for(j=2;j<=(int)sqrt(i);j++)
		{
			if(i%j==0){
                            m=1;
                            break;
			}
		}
		if(m==0)
		{
		printf("%d\n",i);
		break;
		}
	}
	return 0;
}