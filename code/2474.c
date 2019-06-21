#include<stdio.h>
int pd(int);

int main()
{
    int n;
    int i=2;

    scanf("%d",&n);

    if(n==2){
        printf("3");
    }

    else if(n>2){
        for(;;i+=2){

            if(pd(n+i)==1){
                printf("%d",n+i);
                break;
                }
        }
    }
    return 0;
}

int pd(int x)
{
    int t=3;
    for(t=3;;t++){
        if(x%t==0){
            break;
        }
    }
    if(x==t){
        return 1;
    }
    else if(x!=t){
        return 0;
    }
}