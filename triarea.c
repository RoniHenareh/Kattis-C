#include <stdio.h>

int main() {
    
    int tal1, tal2;
    float tal3;
    
    scanf("%d %d", &tal1, &tal2);
    
    tal3 = ((tal2 * tal1) / 2.0);
    
    printf("%0.1f\n", tal3);
    
    return 0;
}