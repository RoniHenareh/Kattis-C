#include <stdio.h>

int main() {
    
    int tal;
    
    scanf("%d", &tal);
    
    if (tal % 2 == 0) {
        printf("Bob");
    } else {
        printf("Alice");
    }
    
    return 0;
}