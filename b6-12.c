#include <stdio.h>

int main(){
    int a[3],m=0;
    for(int i=0;i<3;i++)
        scanf("%d",&a[i]),m=a[i]>m?a[i]:m;
    for(int i=m;i>=1;printf("\n"),i--)
        for(int j=0;j<3;j++)
            if(i<=a[j]) printf("*");
            else printf(" ");
}