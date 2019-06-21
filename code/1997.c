#include <stdio.h>
#include<math.h>
int func(int n) {
    int i, flag = 0;
    for (i = 2; i < n; i++) {
        if ((n%i) == 0)
            flag = 1;
    }
    if (flag == 0)
        return 0;
    else
        return 1;
}
    int main() {
        int n,h;
        scanf("%d", &n);
        do {
            n++;
            h=func(n);
        }while(h!=0);
        printf("%d",n);
        return 0;
    }