#include <stdio.h>

int main() {
    
    float cost, svar, t1, t2, summa;
    int antal;

    scanf("%f", &cost);
    scanf("%d", &antal);
    
    summa = 0;
    for (int i=0;i<antal;i++) {
        
        scanf("%f %f", &t1, &t2);
        summa += t1 * t2;
        
    }
    svar = summa * cost;
    printf("%0.8f\n", svar);
    
    return 0;
}