#include <stdio.h>
int main() {
    int a,mask;
    scanf("%d",&a);
    mask=1<<31;
    if(a & mask){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}