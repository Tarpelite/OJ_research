#include <stdio.h>
int zhi(int x){
    int b=2;
    while(b<x){
        if(x%b==0){
            break;
        }
        b++;
    }
    if(b==x||x==2){
    	return 1;
	}
	else{
		return -1;
	}
}
int main(){
    int a;
    scanf("%d",&a);
	a=a+1;
    while(1){
        if(zhi(a)==1){
            printf("%d",a);
            break;
        }
        a++;
    }
    return 0;
}