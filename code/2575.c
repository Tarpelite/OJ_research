#include<stdio.h>
int cg(int m,int n){
if(m<n||m==0)
    return 0;
if(n==1)
    return m;
if(n==m||n==0)
    return 1;
return cg(m-1,n)+cg(m-1,n-1);

}
int cg(int,int);
int main(){
    int m,n;
    scanf("%d%d",&m,&n);
    printf("%d\n",cg(m,n));
    return 0;
}