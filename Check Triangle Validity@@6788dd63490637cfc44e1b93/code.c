#include <stdio.h>

int main() {
    int a,b,c;
    scanf(" %d %d %d",&a,&b,&c);
    if((a>b+c) && (b>a+c) && (c>b+a)){
        printf("Valid");
    }
    else{
        pritnf("Invalid");
    }
    return 0;
}