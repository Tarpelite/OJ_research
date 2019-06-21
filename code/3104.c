#include<stdio.h>
#include<math.h>


int main()
{
	int m,n,k,i;
	double j=0.00000001;
	scanf("%d%d",&m,&n);

for(i=0;i<n;i++){
	j=j*(m-i)/(i+1);
}
printf("%.lf",j*100000000);
	return 0;
 }