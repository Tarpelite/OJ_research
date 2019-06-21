#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,j,a;
	scanf("%d",&n);
	for(i=n+1;;i++){
		a = 0;
		for(j=2;j<=i-1;j++){
			if(i%j==0){

				a++;break;
			}
		}
		if(a==0){
		printf("%d",j);break;
		}
	}
    return 0;
}