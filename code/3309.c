#include <stdio.h>

int main(){
	int n , i , j , jishu ;
	scanf("%d",&n) ;
	for(i=n+1;i<1000001;i++){
		jishu = 0 ;
		for(j=2;j<i;j++){
			if(i%j==0){
                jishu++ ;
            }
		}
        if(jishu == 0){
            printf("%d\n",i) ;
            break ;
        }
	}
	return 0 ;
}