#include<stdio.h>

int main(){
  int n;
  int i;

  scanf("%d",&n);

  while(1){
    n++;

    for(i=2;i<n;i++){
      if(n%i==0){break;}
    }

    if(i==n){break;}

  }

  printf("%d",n);

  return 0;

}