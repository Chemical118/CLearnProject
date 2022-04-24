#include <stdio.h>
int main(){
    int dx[8]={-1,-1,-1,0,0,1,1,1},dy[8]={-1,0,1,-1,1,-1,0,1},a[27][27]={0};
    for(int i=1;i<=25;i++)
        for(int j=1;j<=25;j++)
            scanf("%d",&a[i][j]);
    for(int i=1;i<=25;printf("\n"),i++)
        for(int j=1;j<=25;j++){
            int t=0;
            for(int k=0;k<8;k++)
                t+=a[i+dx[k]][j+dy[k]];
            if(!a[i][j]){
                if(t==3) printf("1 ");
                else printf("0 ");
            }
            else if(t==2||t==3) printf("1 ");
            else printf("0 ");
        }
}