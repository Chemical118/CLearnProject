#include <stdio.h>

int main(){
    char a[3];
    int c[3]={0};
    for(int i=0;i<3;i++)
        scanf("%c",&a[i]);
    getchar();
    for(int i=0,f=1;i<5;printf("\n"),getchar(),i++,f=1){
        char t;
        scanf("%c",&t);
        for(int j=0;j<3;j++){
            if(a[j]==t) c[j]=1;
            if(c[j]) printf("%c",a[j]);
            else printf("_");
            f*=c[j];
        }
        if(f) break;
    }
}