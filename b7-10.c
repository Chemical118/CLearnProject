#include <stdio.h>

int main(){
    int n,a[10][10];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    for(int i=0;i<n; printf("\n"),i++)
        for(int j=0;j<n;j++)
            if(i-j==0||i+j==n-1) printf("%d ",a[n-1-i][n-1-j]);
            else printf("%d ",a[i][j]);
}