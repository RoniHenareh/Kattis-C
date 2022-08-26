#include <stdio.h>

int main() {
    
    int n;
    scanf("%d", &n);
    
    for (int i = 0; n>i; i++) {
        
        int tal1;
        float tal2, bpm, undre, övre;
        scanf("%d %f", &tal1, &tal2);
        
        bpm = ((60*tal1) / tal2);
        övre = (bpm + (60/tal2));
        undre = (bpm - (60/tal2));
        
        printf("%f %f %f\n", undre, bpm, övre);
    }
    
    printf("%s", "");
    return 0;
}