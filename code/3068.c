#include <stdio.h>

int main()
{
    int a[50000]={2,3},n,l=1;
    scanf("%d",&n);
    if(n==2)printf("3");else if(n==3)printf("5");
    else{
        for(int i=5;;i+=2){
            for(int j=1;j<=l;++j){
                if(!(i%a[j]))break;
                if(a[j]>=i/3+1){
                    if(a[l]==n){
                        printf("%d",i);
                        return 0;
                    }
                    a[++l]=i;
                    break;
                }
            }
        }
    }
    return 0;
}