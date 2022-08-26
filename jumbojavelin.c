#include <stdio.h>

int main() {
    
    int n, summa, svar;
    scanf("%d", &n);
    
    summa = 0;
    for (int i = 0; n>i; i++) {
        
        int tal;
        scanf("%d", &tal);
        
        summa += tal;
        
    }
    
    svar = (summa - (n-1));
    printf("%d", svar);
    return 0;
}