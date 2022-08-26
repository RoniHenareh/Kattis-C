#include <stdio.h>
#include <string.h>

int main() {
    
    char ord[1000]; // hela ordet
    scanf("%s", ord); 
    //printf("%s", ord);

    int n = strlen(ord) + 1 ;

    // kod som ger
    char *a; // pekare 
    int index;
    a = strchr(ord, 'a');
    index = (int)(a - ord);
    // index

    for (int k = index; k<n; k++) {

        printf("%c", ord[k]);

    }

    printf("%s\n", "");

    return 0;
}