#include<stdio.h>
int checkPrimeNumber(int);
int main()
{
	int priStart,priNext;
	scanf("%d",&priStart);
	priNext=checkPrimeNumber(priStart);
	printf("%d",priNext);
	return 0;	
}

int checkPrimeNumber(int testNum)
{
	int i,flag=1;
	testNum++;
	while(flag!=0)
	{
		for(i=2;i*i<(testNum+1);i++)
		{
			flag=1;
			if(testNum%i==0)
			{
				flag=2;
				break;
			}
		}
		if(flag==1)
		{
			flag=0;
			break;
		}
		testNum++;
	}
	return testNum;
}