#include<stdio.h>
#include<math.h>


int main()
{
	int m,n,k=0,i;
	long long j=1;
	scanf("%d%d",&m,&n);
	if(m==0||n>m){
		 printf("1");
		 return 0;
	}
	else{ 
for(i=0;i<n;i++){
	j=j*(m-i)/(i+1);

	
}
}
printf("%lld",j);
	return 0;
 }