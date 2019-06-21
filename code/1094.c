#include<stdio.h>
int bucket[100000][1];
int main(){
    for(int i=0;i<100000;i++){
        bucket[i][0] = 0;
    }
    int count = 0;
    scanf("%d",&count);
    for(int i=0;i<count;i++){
        int temp = 0;
        scanf("%d",&temp);
        bucket[temp][0]++;
    }
    int index = 0;
    scanf("%d",&index);
    int order = 0;
    for (int i = 100000 - 1; i >= 0; i--) {
        if (bucket[i][0] != 0) {
            order++;
            if (order == index) {
                printf("%d %d",i,bucket[i][0]);
                break;
            }
        }
    }
  
}