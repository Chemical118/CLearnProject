#include <stdio.h>

int main(){
    int x;
    scanf("%d",&x);
    for(int i=x,f=1;i;i/=10){
        int t=i%10;
        if(f&&t) f=0;
        if(!f) printf("%d",t);
    }
}