#include <stdio.h>

int main() {
    
    int tal1, tal2;
    scanf("%d %d", &tal1, &tal2);
    
    if (tal1 > tal2) {
        printf("%d", 1);
    } else {
        printf("%d", 0);
    }
    
    return 0;
}