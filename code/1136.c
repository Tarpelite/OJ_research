#include <stdio.h>
int isPrime(int n){
int limit = (int)sqrt(n);
int i;
for(i = 2; i <= limit; i++){
if(n % i == 0){
return 0;
}
}
return 1;
}
int main(){
int n;
scanf("%d", &n);
int i;
if(n == 2){
n = 1;
}
for(i = n + 2; i < 110000; i++){
if(isPrime(i)){
printf("%d", i);
return 0;
}
}
}