#include<stdio.h>
#include<assert.h>
#include<stdlib.h>

void CountSort(int *a, int len)
{
    int i;
assert(a);
int max = a[0], min = a[0];
for (i = 0; i < len; i++){
    if (a[i] > max)
        max = a[i];
        if (a[i] < min)
            min = a[i];
            }
int range = max - min + 1;
int *b = (int *)calloc(range, sizeof(int));
for (int i = 0; i < len; i++){
    b[a[i] - min] += 1;
}
int j = 0;
for (int i = 0; i < range; i++){
    while (b[i]--){
        a[j++] = i + min;
    }
}
free(b);
b = NULL;
}

int a[9999999]={0};
int main(){
    int n,len,k,i;
    scanf("%d",&n);
    for (i=0; i<n; i++) {
        scanf("%d",&a[i]);
    }
        scanf("%d",&k);
    CountSort(a,n);
    int c[99999],j;
    for (i=0,j=0; i<n; j++) {
        c[j] = a[i];
        while (a[i] == c[j]) {
            i++;
        }
    }
    len = j;
    for (i=k-1,j=0; i<n; i++) {
        if (a[i]==c[len-k]) {
            j++;
        }
    }
    printf("%d %d",c[len-k],j);
    return 0;
}