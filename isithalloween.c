#include <stdio.h>
#include <string.h> // nytt!

int main() {
    
    char month[5];   
    int dag;
    
    scanf("%s %d", month, &dag);

    // kan inte jämföra strängar med == 
    int res1 = strcmp(month, "OCT"); // nytt!
    int res2 = strcmp(month, "DEC"); // nytt!
    
    if (res1 == 0 && dag == 31) {
        printf("%s\n", "yup");
    } else if (res2 == 0 && dag == 25) {
        printf("%s\n", "yup");
    } else {
        printf("%s\n", "nope");
    }
     printf("%s", "");
    
    return 0;
}