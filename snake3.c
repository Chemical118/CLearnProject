#include <stdio.h>

int main(){
    int x,y,n,m,num=0;
    int dx[4]={1,0,-1,0},dy[4]={0,-1,0,1},v[2],a[100][100];
    scanf("%d%d",&n,&m);
    x=-1,y=m-1,v[0]=n,v[1]=m-1;
    for(int i=0;i<2*(n<m?n:m);v[i%2]--,i++)
        for(int j=0;j<v[i%2];j++)
            x+=dx[i%4],y+=dy[i%4],a[x][y]=++num;
    for(int i=0;i<n;printf("\n"),i++)
        for(int j=0;j<m;j++)
            printf("%d ",a[i][j]);
}