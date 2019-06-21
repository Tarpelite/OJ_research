#include<stdio.h>
int main()
{
	int e,i;
	scanf("%d",&e);
	int w;
	for(e++;1;e++){
		i=2;
		while(1){
			w=e%i; 
			if(w==0&&i==e){
			    printf("%d",e);
				return 0;
		    }
			else if(w!=0){
				i++;
			    continue;
			}
			else if(w==0){
			    break;
			}
		}
	}
}