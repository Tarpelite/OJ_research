#include <stdio.h>
#include <stdlib.h>
int y[100010]={0};//yin wei xia biaoci shi shi yong lai ji shu ru de shu shi shen me de ,qie ti mu zhong shuo xiao yu 100000,yin ci shu zu kai dao bi ta duo 10 jiu ke yi le.

int main()
{
    int n,k,a;
    scanf("%d",&n);
    while(n--){
        scanf("%d\n",&a);//zhi yao n hai man zu tiao jian ,jiu ke yi yi zhi shu ru a,suo yi bu yong gei shu ru de shu kai shu zu,zhi yong ge ji lu yi ge shu chu xian duo shao ci de qing kuang kai shu zu.
        y[a]=y[a]+1;//zhe li shi yong lai ji shu de,mei chu xian yi ci xiang tong de a, shu zu li mian ji de shu jiu hui jia 1.
    }               //zhe li de jiao biao a jiu biao shi shu ru shu de da xiao.
    scanf("%d",&k);
    int shu,count=0;//count yi ding yao ji de chu shi hua wei ling
    for(shu=100000;shu>=0;shu--){
        if(y[shu]!=0){//ru guo shu zu zhong cun de shu deng yu ling,jiu shuo ming zhe ge shu geng ben mei chu xian guo.
            count++;//dan ru guo bu wei ling,ze ke yi ji le yi ci,er qie shi biao shu kong da wang xiao ji lu.
        }
       if(count==k){//ci shi shuo ming zhao dao le di k da de shu.
            printf("%d %d",shu,y[shu]);
            break;//zhe ge break hen bi yao ,yi zhao dao fu he de jiu ma shang ting xia lai.
        }
    }

    return 0;

}