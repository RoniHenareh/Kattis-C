#include <stdio.h>
#include <math.h>

int main() {
    
    int i, j, n, svar;
    scanf("%d", &n);
    
    i = 2;
    j = 3;
    
    for (int k = 1; n > k; k++) {
        
        j += i;
        i *= 2;
    }
    
    svar = pow(j, 2);
    printf("%d\n", svar);
    
    return 0;
}