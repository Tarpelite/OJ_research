#include<stdio.h>
#define M 100001

int main()
{
    int k, i, j, temp, t=0, b=0, x, n, c;
    int a[M][2];
    scanf("%d", &n);
    for(i=0;i<M;i++){
            for(j=0;j<2;j++){
                a[i][j]=0;
            }
    }
    while(n--){
        scanf("%d", &c);
        a[c][0]=c;
        a[c][1]++;
    }
    scanf("%d",&k);
    for(i=M-1;i>0;i--){
            if(a[i][0]!=0){
                t++;
                if(t==k){
            printf("%d %d", a[i][0], a[i][1]);
            break;
                }
        }
    }
    return 0;
}