#include<stdio.h>
int is_prime(int x) {
if (x == 1) return 0;
for (int now = 2 ;now * now <= x; now ++)
if (x%now == 0)return 0;
return 1;
}
int main(){
int x;
int i;
scanf("%d",&x);
for(i=x+1;i<200000;i++){
    if(is_prime(i)){printf("%d",i);break ;}

}
return 0;}