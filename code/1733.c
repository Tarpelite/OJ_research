#include<stdio.h>
#include<stdlib.h>

int main()
{
  int a,c=0,i=2;
  scanf("%d",&a);
  for(a++;;a++){
  for(int i=2;i<a;i++){
        if(a%i==0){
            c++;
            break;
        }
    }
    if(c==0){
        printf("%d ",a);
        break;
    }
    else{
    c = 0;
    }
  }

 return 0;
}