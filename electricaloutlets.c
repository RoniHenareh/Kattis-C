#include <stdio.h>

int main() {
    
    int n;
    scanf("%d", &n);

    for (int i = 0; i<n; i++) {

        int n2;
        scanf("%d", &n2);
        
        int summa = 0;
        for (int j = 0; j<n2; j++) {
            
            int tal;
            scanf("%d", &tal);
            summa += tal;
        }
        printf("%d\n", summa - n2 + 1);
    }
    
    return 0;
}