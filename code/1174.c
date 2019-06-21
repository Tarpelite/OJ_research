#include <stdio.h>
#include <math.h>
int zhi(int m){int a=0;
    for(int i=2;i<m;i++){
        if(m%i==0){
            a++;
        }
    } if(a==0){
        return 0;
    }else{
        return 1;
    }


}
int main()
{

   int m;
    scanf("%d",&m);
while(zhi(m+1)){
m++;
}

    printf("%d",m+1);
    return 0;
}