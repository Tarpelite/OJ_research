#include<stdio.h>

int f(int m)

{

	int i,leap=1;


	for(i=2;i<m;i++){

	if(m%i==0)
	{

		leap=0;break;

	}

	}



		return leap;

	}


int main()

{
	int n,k;
    scanf("%d",&n);
   for(k=n+1;1;k++){
   	if(f(k)==1){

   	printf("%d",k);
   	return 0;
   }
   }
}