#include <stdio.h>

int main(){
    int n,ans=0;
    char a[100];
    scanf("%d",&n);
    getchar();
    for(int i=0;i<n;i++)
        scanf("%c",&a[i]);
    for(int i=0;i+2<n;i++)
        if(a[i]=='c'&&a[i+1]=='a'&&a[i+2]=='t') ans++;
    printf("%d",ans);
}