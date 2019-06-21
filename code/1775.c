#include<stdio.h>
#include<math.h>
int main()
{
	int m,n,k;
	scanf("%d%d",&m,&n);
	int a=1;
	if(m!=n&&m>n&&n!=1&&n!=0){
            for(k=1;k<=n;k++){
     a=(a*(m-n+k))/k;
     }
	printf("%d",a);
	}

if(m==n&&m!=0){
        printf("1");
	}
	if(m==n&&m==0){
        printf("0");
	}
	if(m<n&&m!=0){
        printf("1");
	}
	if(m<n&&m==0){
        printf("0");
	}
	if(m!=n&&m>n&&n==1){
        printf("%d",m);
	}
	if(m>n&&n==0){
        printf("0");
	}





	return 0;
}