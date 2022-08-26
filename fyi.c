#include <stdio.h>

int main() {
    
    int tal;
    scanf("%d", &tal); // hela talet

    const int NUM = 7;
    int lista[NUM];

    int score;
    for (int i=0; i<NUM;i++) {

        int j = tal % 10;
        tal /= 10;

        lista[i] = j;
    }
    
    if (lista[4] == 5 && lista[5] == 5 && lista[6] == 5) { // intressant!
        printf("%d\n", 1);
    } else {
        printf("%d\n", 0);
    }
    
    return 0;
}
