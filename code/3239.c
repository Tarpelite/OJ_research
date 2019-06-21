#include<stdio.h>
#include<math.h>
int motherfu_k(int);
int main()
{
    int n,i,t,y;
    scanf("%d",&n);
    for(i=1;;i++){
       t=n+i;
       y=motherfu_k(t);
       if(y==1){
          printf("%d",t);
            break;
       }
    }
    return 0;
}

int motherfu_k(int x)
{
    int j,flag=1;
    for(j=2;j<x;j++){
        if(x%j==0){
            flag=0;
            break;
        }
    }
    return flag;
}