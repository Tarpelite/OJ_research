#include<stdio.h>
#include<math.h>
#define N 100055
int tex[N]={0,0,1};

int yu(int t){
    int i;
    for(i=2;i<t;i++){
        if(tex[i]==1 && t%i==0)return 0;
    }
    return 1;
}
int main(){
    int i;
    int n;
    for(i=3;i<N;i++){
        tex[i]=yu(i);
    }
    scanf("%d",&n);
    while(tex[++n]==0){}
    printf("%d",n);
    return 0;
}