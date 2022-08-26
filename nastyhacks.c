#include <stdio.h>

int main() {
    
    int n;
    scanf("%d", &n);
    
    for (int i=0; n>i; i++) {
    
        int tal1, tal2, tal3;
        scanf("%d %d %d", &tal1, &tal2, &tal3);
        
        if ((tal2-tal3) > tal1){
            printf("%s\n", "advertise");
        } else if ((tal2-tal3) == tal1) {
            printf("%s\n", "does not matter");
        } else {
            printf("%s\n", "do not advertise");
        }
        
    }
    printf("%s", "");
    return 0;
}