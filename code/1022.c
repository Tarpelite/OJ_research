#include<stdio.h>
int A[10000];
void Find()
{
    int N=100010,n,i,j,flag;
    A[0]=2;
    for(n=3,j=1;n<N;n++){
        for(i=0,flag=0;i<j;i++){
            if(n%A[i]==0){
                flag++;
                break;
            }
        }
        if(flag==0){
            A[j]=n;
            j++;
        }
    }
}
void main()
{
    Find();
    int n,i;
    scanf("%d",&n);
    for(i=0;i<10000;i++){
        if(A[i]==n){
            printf("%d",A[i+1]);
            break;
        }
    }
}