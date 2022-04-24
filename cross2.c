#include <stdio.h>

int main(){
    int n,m,num=0,a[100][100];
    scanf("%d%d",&n,&m);
    for(int i=0;i<n+m;i++)
        for(int j=0;j<n;j++){
            int x=j,y=i-j;
            if(0<=y&&y<m) a[x][y]=++num;
        }
    for(int i=0;i<n;printf("\n"),i++)
        for(int j=0;j<m;j++)
            printf("%d ",a[i][j]);
}