#include <stdio.h>

int main() {
    
    int G, T, n, maxvikt, summa, tal, svar;
    scanf("%d %d %d", &G, &T, &n);
    
    maxvikt = (G-T)*0.90;

    summa = 0;
    for (int i=0;i<n;i++) {

        scanf("%d", &tal); 
        summa += tal; 
    }

    svar = maxvikt - summa;
    printf("%d\n", svar);
    
    return 0;
}