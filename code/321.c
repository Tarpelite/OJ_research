#include<stdio.h>
int main()
{
	int x,i,j,t=0;
	scanf("%d",&x);
	/*if(i==2)
	    printf("3");
	else if(i==3)
	    printf("5");
	else if(i==5)
	    printf("7");
    else{*/
	    for(i=x+1;i<200000;i++){
		    /*if(i%2!=0){
			    if(i%3!=0){
				    if(i%5!=0){
					    if(i%7!=0){
					    	t=0;
						    for(j=7;j<=i-1;j++){
						    	if(i%j==0){
						    		t=1;
									break;
								}
							}
					    }
				    }
			    }
	 	    }*/
	 	    t=0;
	 	    for(j=2;j<i-1;j++)
	 	        if(i%j==0){
	 	        	t=1;
	 	        	break;
				}
	 	    if(t==0){
	 	    	printf("%d",i);
				break; 
			}
	    }
    //}
	return 0;
}