#include <stdio.h>
int a[10000000][2]={0};
int main()
{
    int n,i,k,j,m,o;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i][0]);
    }
    scanf("%d",&k);
    for(i=0;i<k;i++){
        for(j=i+1;j<n;j++){
            if(a[i][0]<a[j][0]){
                m=a[i][0];
                o=a[i][1];
                a[i][0]=a[j][0];
                a[i][1]=a[j][1];
                a[j][0]=m;
                a[j][1]=o;
            }
            if(a[i][0]==a[j][0]){
                a[j][0]=0;
                a[i][1]++;
            }
        }
    }
    printf("%d %d",a[k-1][0],a[k-1][1]+1);
    return 0;
}