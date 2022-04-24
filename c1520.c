#include <stdio.h>
int main(){
    int n,m,x,y,z,c;
    int dx[8]={-1,-1,-1,0,0,1,1,1},dy[8]={-1,0,1,-1,1,-1,0,1},a[172][172]={0},t[172][172]={0};
    scanf("%d%d%d%d%d",&n,&m,&x,&y,&z);
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            scanf("%d",&a[i][j]);
    scanf("%d",&c);
    for(int l=0;l<c;l++){
        for(int i=1;i<=n;i++)
            for(int j=1;j<=m;j++){
                int te=0;
                for(int k=0;k<8;k++)
                    te+=a[i+dx[k]][j+dy[k]];
                if(!a[i][j]){
                    if(te==x) t[i][j]=1;
                    else t[i][j]=0;
                }
                else if(y<=te&&te<z) t[i][j]=1;
                else t[i][j]=0;
            }
        for(int i=1;i<=n;i++)
            for(int j=1;j<=m;j++)
                a[i][j]=t[i][j];
    }
    for(int i=1;i<=n;printf("\n"),i++)
        for(int j=1;j<=m;j++)
            printf("%d ",a[i][j]);
}
