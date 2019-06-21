#include<stdio.h>

int main()
{  int a,i,b,c;
   scanf("%d",&a);
   if(a==2) printf("3");
   else if(a==3) printf("5");
   else{b=a+2;
        for(i=3,c=1;c>0&&i<b;i=i+2){
           c=b%i;
        if(c==0) b=b+2,i=1,c=1;}

   printf("%d",b);}
return 0;
}