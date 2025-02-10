#include <stdio.h>

int main() {
    int num, n;
    scanf("%d %d", &num, &n);
    
    num = num & ~(1 << n); // Clearing the nth bit
    
    printf("%d\n", num);
    
    return 0;
}
