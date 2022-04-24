#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<2*n-1;printf("\n"),i++)
        for(int j=0;j<2*n-1;j++)
            if(j-i<=n-1&&j+i<=3*n-3)
                if(i+j>=n-1&&i-j<=n-1){
                    int t=j-(n-1);
                    t=t>0?t:-t;
                    printf("%d",t+1);
                }
                else printf(" ");
}