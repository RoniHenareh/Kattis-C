#include <stdio.h>

int main() {
    
    int n;
    
    scanf("%d", &n);
    
    for (int i=1; i<n+1; i++) {
        
        printf("%d %s\n", i, "Abracadabra");
    }
    
    return 0;
}