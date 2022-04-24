#include <stdio.h>

int main(){
    int a,b,c,l,s;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b) l=a,s=b;
    else l=b,s=a;
    printf("%d %d",c>l?c:l,c<s?c:s);
}