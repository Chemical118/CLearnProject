#include <stdio.h>

int main(){
    int n,m,ans=0,a[100];
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
            ans+=(a[i]+a[j]==m)?1:0;
    printf("%d",ans)
}