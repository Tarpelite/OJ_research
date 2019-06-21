#include <stdio.h>
int zhi(int x){
	int i;
	switch(x){
		case 2:case 3:
			return 1;
			break;
		default:
			for(i=2;i*i<=x;i++){
				if(x%i==0)
					return 0;
			}
		return 1;
	}
}
int main()
{
	int n,j;
	scanf("%d",&n);
	for(j=n+1;;j++){
		if(zhi(j)==1){
		
			printf("%d",j);
			break;
	}
	}
	return 0;
 }