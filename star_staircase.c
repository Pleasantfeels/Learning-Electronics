#include <stdio.h>
const char *star = "*";

int main(void) {
    int i;
    int j;

    for (i = 0; i <= 5; i++) {
        for(j = 0; j <= i; j++){
            printf("%s", star);
        }
        printf("\n");
    }

    return 0;
}
    
