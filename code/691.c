#include<stdio.h>
#include<math.h>
int main()
{
int n;
scanf("%d",&n);

int i=2,k,m,a;
for(k=n+1;;k++){
    for(i=2;i<k;i++){
        m=k%i;
        a=0;
        if(m==0){
            a=1;
            break;
        }

    }
    if(a==0){
        printf("%d",k);
        break;
    }
  }
return 0;
}