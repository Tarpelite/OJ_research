/* 
 Author: 李天
 Result: WA	Submission_id: 1561586
 Created at: Thu Apr 04 2019 18:26:46 GMT+0800 (CST)
 Problem_id: 2002	Time: 3	Memory: 1760
*/

#include <stdio.h>
#include<math.h>

int main() {
	int a,b,i,n,j,k,c,flag;
	double d,e,f;
	scanf("%d",&n);
	for(i=n+1;i<=1000000;i++)
	{	flag=0;
		for(j=2;j<=(int)sqrt(i);j++)
		{
			if(i%j==0){flag=1;break;
			}
		}
		if(flag==0)
		{
		printf("%d\n",i);
		break;
		}
	}
	return 0;
}