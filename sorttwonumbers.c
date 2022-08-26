#include <stdio.h>

int main() {
    
    int t1, t2;
    
    scanf("%d %d", &t1, &t2);
    
    if (t1 < t2) {
        printf("%d %d", t1, t2);
    } else {
        printf("%d %d", t2, t1);
    }
    
    return 0;
}