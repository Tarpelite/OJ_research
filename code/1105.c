#include<stdio.h> 
#include<math.h>
int ack(int);
int ack(int a){int i;int b=0; for(i=2;i<a;i++){if(a%i==0)b++;
}if(b==0) return 1;
else return 0;

}
int main() {int i;int j;
scanf("%d",&i);
for(j=i+1;i;j++){if((ack(j))==1) break;
}printf("%d",j);
return 0;
}