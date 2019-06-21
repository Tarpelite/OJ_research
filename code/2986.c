#include <stdio.h>
int a[10000000], b[10000000]={0};
int main()
{
    int n, k, i, j, m, sum = 0,x;
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    scanf("%d", &k);
    for(i=0;i<k;i++){
        for(j=i+1;j<n;j++){
            if(a[i]<a[j]){
                m = a[i];
                a[i] = a[j];
                a[j] = m;
                x = b[i];
                b[i] = b[j];
                b[j] = x;
            }
            if(a[i]==a[j]){
                a[j] = 0;
                b[j] = 0;
                b[i]++;
            }

        }
    }

    printf("%d %d", a[k-1], b[k-1]+1);
    return 0;

}