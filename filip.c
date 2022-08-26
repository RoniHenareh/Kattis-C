
#include <stdio.h>

int main() {

    int tal1, tal2;

    scanf("%d %d", &tal1, &tal2);

    // intressant, vänder på ordningen 
    tal1 = (tal1 % 10) * 100 + ((tal1 / 10) % 10) * 10 + ((tal1 / 100) % 10);
    tal2 = (tal2 % 10) * 100 + ((tal2 / 10) % 10) * 10 + ((tal2 / 100) % 10);

    if (tal1 > tal2) {
        printf("%d\n" ,tal1);
    } else {
        printf("%d\n" ,tal2);
    }
    
    return 0;
}