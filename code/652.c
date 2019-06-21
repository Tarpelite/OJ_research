#include <stdio.h>
#include<stdlib.h>
int cmp(const void * a,const void * b){
    return (*(int*)b-*(int*)a);
}
int a[10000003];
int main(){
    int i=0,n,nn,k,odr=1,count=1;
    int *p;
    scanf("%d",&n);
    nn=n;
    while(n--){
        scanf("%d",&a[n]);
    }
    qsort(a,nn,sizeof(int),cmp);
    scanf("%d",&k);
    p=&a[0];
    while(odr<k){
        if(*p==*(p+1)){
            p++;
            continue;
        }
        else
            odr++;
            p++;
            continue;
    }
    printf("%d ",*p);
    for(i=1;*p==*(p+i);i++){
        if(p+i>&a[nn-1])	break;
        count++;
    }
    printf("%d",count);
    return 0;
}