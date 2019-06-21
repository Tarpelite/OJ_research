#include<stdio.h> 
#include<stdlib.h> 
int comp(const void*a,const void*b) 
{ 
    return *(int*)b-*(int*)a; 
}
int main() 
{ 
    int n, l, w, i; 
    scanf("%d", &n);
    int a[n + 1]; 
    int c; 
    int b[100000 + 1]; 
    int j;
    for (w = 0;w <= 100000;w++) {
         b[w] = 0; 
    } 
    int tmp = 0; 
    j=0; 
    for(i = 1; i <= n;i++) {
         scanf("%d", &c); 
            b[c]++; 
    if (b[c] == 1) { 
            a[j] = c;
            j++; 
       } 
    } 
    qsort(a, j, sizeof(int), comp); 
    scanf("%d", &l); 
    printf("%d %d\n", a[l-1], b[a[l - 1]]);
    return 0; 
}