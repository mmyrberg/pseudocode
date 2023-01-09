#include <stdio.h>

int main() {
    int i;
    int l = 0;

    for (i = 0; i < (5*5*5); i++)
        l++;

    printf("%d\n", l);
    
    return 0;
}