#include <stdio.h>
int main() {
    int x,i,mask;
    scanf("%d %d",&a,&i);
    mask=1<<(i-1);
    x=x|mask;
    printf("%d",x);
    return 0;
}