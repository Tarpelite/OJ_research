#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,sum=0,i;
    scanf("%d",&n);
    m=n+1;
    while(sum!=2){//zhe li yong de shi:yi ge zhi shu zhi neng bei 1 he ta zi ji zheng chu
        sum=0;//zai ci jin ru xun huan shi,chong xin gei sum fu zhi wei 0,hao rang ta zai ci ji lu neng zheng chu ta de shu de ge shu.
        for(i=1;i<=m;i++){
            if(m%i==0)
                sum++;
        }
        m++;

    }
    printf("%d",--m);//--m biao shi m xian zi jian 1 zai shu chu,er m-- biao shi m shu chu zhi hou zai zi jian yi,zhe yang dui shu chu mei you shen me shi zhi xing de yong chu,shi cuo wu de.
    return 0;
}