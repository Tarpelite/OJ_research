#include <stdio.h>
int main(){
int a,b,c,d=0;
scanf("%d",&a);
b=a+1;
for(b;b;b++){
for(c=2;c<b;c++){if(b%c==0) d++;}
if(d==0){printf("%d",b);return 0;
}d=0;
}
}