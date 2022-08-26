#include <stdio.h>

int main() {
    
    int n;
    scanf("%d", &n);
    
    double tal1, tal2, summa;
    
    summa = 0;
    for(int i=0; i<n;i++) {
        
        scanf("%lf %lf", &tal1, &tal2); // lf är double
        summa += (tal1*tal2);
    }
    printf("%0.3lf\n", summa);
}