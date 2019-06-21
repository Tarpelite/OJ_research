#include<stdio.h>
#include<math.h>
int prime(int );
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=n+1;;i++){
        if(prime(i)==1){printf("%d",i);break;}
    }
    return 0;
}
int prime(int n)
{int j;

 for(j=2;j<=sqrt(n);j++)
 if(n%j==0){return 0;break;}
    return 1;
}