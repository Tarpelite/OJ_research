#include<stdio.h>
#include<math.h>


int main()
{
	int m,n,k,i;
	double j=1;
	scanf("%d%d",&m,&n);
for(i=1;i<=n;i++){
	j=j*((double)(m+1-i)/(i));
}
printf("%.lf",j);
	return 0;
 }