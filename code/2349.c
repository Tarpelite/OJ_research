#include<stdio.h>
int is_zhishu(int a)
{
    if(a==1){return 0;}
    else if(a==2){return 1;}
    else{
        int b=2;
        while(b*b<=a){
            if(a%b==0){return 0;}
            else{
                b++;
            }
        }
    return 1;
    }
}
int main(){
int n;
scanf("%d",&n);
n++;
while(is_zhishu(n)==0){
    n++;
}
printf("%d",n);
return 0;}