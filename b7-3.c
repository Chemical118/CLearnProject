#include <stdio.h>

int main(){
    char a[5];
    for(int i=0;i<5;i++)
        scanf("%c",&a[i]);
    for(int i=5;i>0;printf("\n"),i--)
        for(int j=0;j<5;j++)
            printf("%c",a[(i+j)%5]);
}