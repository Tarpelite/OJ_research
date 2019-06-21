#include <stdio.h>
#include <math.h> 
int main()
{
	int x,y,i;
	scanf("%d",&x);
	y=x+1; 
	while(1){
		i=2; 
		while(i<y){
		if(y%i==0){
			break;
		}else i++;
	    }if(i==y){
	    	break;
		}y++;                    
	}
	printf("%d",y);                                                                                                                          
    return 0;
}