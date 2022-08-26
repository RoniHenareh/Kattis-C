#include <stdio.h>
#include <string.h>

int main() {
    
    char ord[2000];
    scanf("%s", ord);
    
    int lenord = (strlen(ord)-2)*2;
    //printf("%d\n", lenord);

    printf("%s", "h");
    for (int i=0; i<lenord; i++) {
        printf("%s", "e");
    }
    printf("%s\n", "y");

    //printf("%s\n", ord);
    
    return 0;
}

