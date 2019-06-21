#include <stdio.h>
#include <math.h>
int main(){
    int m;  // 输入的整数 
    int i;  // 循环次数
    int k;  // m 的平方根 
    scanf("%d",&m);
    while(m){
    	m++;
    	k=(int)sqrt( (double)m );
    	for(i=2;i<=k;i++)
        	if(m%i==0)
            	break; 
    	if(i>k){
        	printf("%d",m);
        	return 0;
   		}
	}
    return 0;
}