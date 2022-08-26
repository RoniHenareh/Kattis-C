#include <stdio.h>

int main() {
    
    char ord[1000];
    scanf("%s", ord);
    
    const int NUM = 3;
    
    for (int i = 0; i<NUM; i++) {
        printf("%s ", ord);
    }
    printf("\n");
    return 0;
}