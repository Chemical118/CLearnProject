#include <stdio.h>

int main(){
    int a[100],n;
    double s=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]),s+=a[i];
    s/=n;
    for(int i=0;i<n;i++)
        if(a[i]>s) printf("%d ",a[i]);
}