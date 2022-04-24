#include <stdio.h>

int main(){
    int t,ma,mi,ans;
    scanf("%d",&t);
    ans=ma=mi=t;
    while(t){
        scanf("%d",&t);
        if(t) ans+=t,ma=t>ma?t:ma,mi=t<mi?t:mi;
    }
    printf("%d %d %d",ans,mi,ma);
}