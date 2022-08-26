#include <stdio.h>
#include <math.h> 

int main() {
    
    int n, tal, summa, sista, nytt;
    scanf("%d", &n);
    
    summa = 0;
    for (int i=0; i<n; i++) {
        
        scanf("%d", &tal);
        
        sista = tal % 10;

        nytt = tal / 10; // decimal delen försvinner ty int
        
        summa += pow(nytt, sista);
        
    }

    printf("%d\n", summa);
    
    return 0;
}