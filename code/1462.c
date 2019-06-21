#include<stdio.h>
int iszhi(int a)
{
    if(a==2){
        return 1;
    }
    else{
        int i=a-1;
        double b;
        while(i>1){
            b=a%i;
            if(b==0){
                    return 0;
                break;
            }
            i--;
        }
        if(i==1){
            return 1;
        }
    }
}
int main()
{
    int n,i;
    scanf("%d",&n);
    i=n;
   do{
    i++;
   }while(iszhi(i)==0);
   printf("%d",i);
    return 0;
}