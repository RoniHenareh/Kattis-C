#include <stdio.h>

int main() {
    
    int tal1, tal2;
    scanf("%d", &tal1);
    scanf("%d", &tal2);
    
    if ((tal1>0) && (tal2>0)) {
        printf("%d\n", 1);
    } else if ((tal1>0) && (tal2<0)) {
        printf("%d\n", 4);
    } else if ((tal1<0) && (tal2>0)) {
        printf("%d\n", 2);
    } else if ((tal1<0) && (tal2<0)) {
        printf("%d\n", 3);   
    }
    return 0;
}