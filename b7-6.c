#include <stdio.h>

int main(){
    int ind=0,val[10],num[10];
    for(int i=0,f=0;i<10;i++,f=0){
        int t;
        scanf("%d",&t);
        for(int j=0;j<ind;j++)
            if(val[j]==t){num[j]++;f=1;break;}
        if(!f) val[ind]=t,num[ind++]=1;
    }
    for(int i=0;i<ind;i++)
        printf("%d %d\n",val[i],num[i]);
}