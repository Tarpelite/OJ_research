#include<stdio.h>
#include<stdlib.h>//下面system的库头文件
int isz(int n){
	int i,flag=0;
	if(n==2) return 1;
	for (i=2;i<n;i++){
		flag+=(n%i==0);
	}
	if(flag==0) return 1;
	else return 0;
} 
int main(){
	int n;
	scanf("%d",&n);
	n++;
	while(isz(n)!=1){
		n++;
	}
	printf("%d",n);
    system("PAUSE");//编译器的原因，可以连着上面库头和此项一起删掉
    return 0;
}
/*
  作者：Golden_Apple,
  转载请注明出处，
  请勿用作商业用途。
*/