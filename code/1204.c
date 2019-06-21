//好懂你马 
#include<stdio.h>
#include<stdlib.h>//下面system的库头文件
#define max(x,y) (x>=y?x:y)
#define min(x,y) (x<=y?x:y)
int i,j,a[105],n;
int nnn(int l,int r){
	int nn=0;
	for(i=l;i<=r;i++){
		nn=(nn+a[i])%n;
	}
	return nn;
}
int mmm(int l,int r){
	int mm=1;
	for(i=l;i<=r;i++){
		mm=(mm*a[i])%n;
	}
	return mm;
}
int hhh(int l,int r){
	int hh=0;
	for(i=l;i<=r;i++){
		hh^=a[i];
	}
	return hh;
}
int main(){
    int k,l,r,j;
    scanf("%d%d",&n,&k);
    //printf("----%d%d----",n,k);
    int ans[k];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(j=0;j<k;j++){
    	scanf("%d %d",&l,&r);
    	//printf("\n%d-----%d\n",l,r);
    	ans[j]=hhh(min(nnn(l,r),mmm(l,r)),max(nnn(l,r),mmm(l,r)));
    	//printf("\n++++%d++++\n",ans[j]);
	}
	for(i=0;i<k;i++){
		printf("%d\n",ans[i]);
	}
    

    system("PAUSE");//编译器的原因，可以连着上面库头和此项一起删掉
    return 0;
}
/*
  作者：Golden_Apple,
  转载请注明出处，
  请勿用作商业用途。
*/