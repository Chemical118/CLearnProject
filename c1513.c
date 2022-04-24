#include <stdio.h>

int main(){
    int n,num=0;
    int a[99][99]={0};
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        if(i%2)
            for(int j=0;j<n;j++){
                int x=j,y=n-1+i-j;
                if(y<n) a[x][y]=++num;
            }
        else
            for(int j=0;j<n;j++){
                int x=n-1-j,y=i+j;
                if(y<n) a[x][y]=++num;
            }
    }
    for(int i=0;i<n;printf("\n"),i++)
        for(int j=0;j<n;j++)
            printf("%d ",a[i][j]);
}