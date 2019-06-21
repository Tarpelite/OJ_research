#include <stdio.h>
int main()
{
	int n,i,p;
	scanf("%d",&n);
	n++;
	while(1){
		for(i=2;i<n;i++){
			p=n%i;
			if(p==0) break;
		}
		if(p!=0) break;
		else n++;
	}
	printf("%d",n);
	return 0;
 }