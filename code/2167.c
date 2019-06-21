#include<stdio.h>
#include<math.h>
int isprime(int);
int main()

{
    int n,d=0;
    scanf("%d",&n);

    if(n==2||n==1){
    printf("%d",(n+1));}
   else

    {
  while(d==0)
  {
      n++;
      d=isprime(n);
  }


    printf("%d",n);}
    return 0;
}
int isprime(int num) {
    int i=2,prime=1;
    if(num%2==0) prime=0;
    else {
        for(i=3; i<=sqrt(num);i+=2) {
            if(num%i==0) {
                prime=0;
                break;
            }
        }
    }return prime;
}