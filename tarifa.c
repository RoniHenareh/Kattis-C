#include <stdio.h>

int main() {
    
    int surf, n, tal, summa;
    
    scanf("%d", &surf);
    scanf("%d", &n);
    
    summa = surf;
    for (int i=0; i<n; i++) {
        
        scanf("%d", &tal); 

        summa -= tal;
        summa += surf;
        
    }
    
    printf("%d\n", summa);
}