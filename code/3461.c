#include<stdio.h>
#include<stdlib.h>//下面system的库头文件
int ccc(int m,int n){
	if(n==m||n==0)
		return 1;
	else
		return ccc(m-1,n)+ccc(m-1,n-1);
}
int main(){
    int n,m;
	scanf("%d%d",&n,&m);
    printf("%d",ccc(n,m));

    system("PAUSE");//编译器的原因，可以连着上面库头和此项一起删掉
    return 0;
}
/*
  作者：Golden_Apple,
  转载请注明出处，
  请勿用作商业用途。
*/