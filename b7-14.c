#include <stdio.h>

int main(){
    int m1,m2,n1,n2,x,y,a[20][20],t;
    scanf("%d%d",&x,&y);
    for(int i=0;i<x;i++)
        for(int j=0;j<y;j++)
            scanf("%d",&a[i][j]);
    scanf("%d%d%d%d",&m1,&n1,&m2,&n2);
    if(m1>m2) t=m2,m2=m1,m1=t;
    if(n1>n2) t=n2,n2=n1,n1=t;
    for(int i=0;i<x;printf("\n"),i++)
        for(int j=0;j<y;j++)
            if(m1<=i&&i<=m2&&n1<=j&&j<=n2) printf("%d ",a[m1+m2-i][n1+n2-j]);
            else printf("%d ",a[i][j]);
}