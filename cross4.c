#include <stdio.h>

int main(){
    int n,m,num=0;
    int a[100][100];
    scanf("%d%d",&n,&m);
    for(int i=0;i<n+m;i++)
        for(int j=0;j<m;j++){
            int x=i-j,y=m-1-j;
            if(0<=x&&x<n) a[x][y]=++num;
        }
    for(int i=0;i<n;printf("\n"),i++)
        for(int j=0;j<m;j++)
            printf("%d ",a[i][j]);
}