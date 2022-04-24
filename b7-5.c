#include <stdio.h>

int main(){
    int f,ind=0,ans=0,a[100];
    do{
        int t;
        scanf("%d",&t);
        f=0;
        for(int i=0;i<ind;i++)
            if(a[i]==t){f=1;break;}
        if(!f) a[ind++]=t;
    }
    while(!f);
    for(int i=0;i<ind;i++)
        ans+=a[i];
    printf("%d",ans);
}
