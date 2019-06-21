#include <stdio.h>
int main()
{
	int input;
	scanf("%d",&input);
	int tem,i;
	input++;
	
	while(1)
	{
		tem=0;
		for(i=1;i<input;i++){
			if(input%i==0) tem++;
		}
		
		if(tem==1)
		break;
		
		input++;
	 } 
	
	printf("%d",input);
	
	return 0;
}