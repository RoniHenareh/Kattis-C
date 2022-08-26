#include <stdio.h>

int main() {
    
    int tal1, tal2, tal3;
    scanf("%d %d %d", &tal1, &tal2, &tal3);

    for (int i = 1; i<(tal3+1); i++) {

        if (i % tal1 == 0 && i % tal2 == 0){
            printf("%s\n", "FizzBuzz");
        } else if (i % tal2 == 0) {
            printf("%s\n", "Buzz");
        } else if (i % tal1 == 0) {
            printf("%s\n", "Fizz");
        } else {
            printf("%d\n", i);
        }
    }
    return 0;
}