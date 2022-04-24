#include <stdio.h>
int main(){
    int x,y,n,m,num;
    int v[2],a[100][100],dx[4]={0,-1,0,1},dy[4]={-1,0,1,0};
    scanf("%d%d",&n,&m);
    x=n-1,y=m,num=n*m,v[0]=m,v[1]=n-1;
    for(int i=0;i<2*(n<m?n:m);v[i%2]--,i++)
        for(int j=0;j<v[i%2];j++)
            x+=dx[i%4],y+=dy[i%4],a[x][y]=num--;
    for(int i=0;i<n;printf("\n"),i++)
        for(int j=0;j<m;j++)
            printf("%d ",a[i][j]);
}