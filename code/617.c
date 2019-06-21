#include<stdio.h>
int prime[100000]={2};
void asd()
{int i,j,m=1,is_prime=1;
for(i=3;i<=110000;i+=2)
{for(j=0,is_prime=1;prime[j]*prime[j]<=i;j++){
if(i%prime[j]==0){
is_prime=0;
break;
}
}
if(is_prime){prime[m]=i;
m++;
}
}
}

int main()
{int a,i,j;
	asd();
	scanf("%d",&a);
	for(i=0;i<100000;i++)
	{if(prime[i]==a)
	break;
	}
	j=++i;
	if(prime[j]!=0)
	printf("%d",prime[j]);
	return 0;
}