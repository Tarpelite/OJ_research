#include<stdio.h>
    #include<math.h>
    int f(int a){
        int i,k;
        k=(int)sqrt(a);
        for(i=2;i<=k;i++){
            if(a%i==0)
            break;
        }
        if(i>k)
            return 1;
        else
            return 0;
    }
    int f(int a);
    int main()
    {
        int a,b;
            scanf("%d",&a);
        for(b=a+1;b<=1000000;b++){
            if(f(b)==1)
            printf("%d",b);
            else continue;
            break;
        }
        return 0;
    }