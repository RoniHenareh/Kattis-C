#include <stdio.h>
#include <string.h>

int main() {
    
    char namn[100];
    scanf("%s", namn);
    
    //printf("%s\n", namn);

    printf("%c", namn[0]);
    
    int i;
    for (i = 0; i < strlen(namn); i++) { // tog bort len

        if (namn[i] == '-') {

            printf("%c", namn[i+1]);

        }

    }
    
    printf("\n");
    return 0;
}