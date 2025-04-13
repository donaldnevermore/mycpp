#include <stdio.h>

int main(void) {
    printf("input some string: \n");
    int c = getchar();
    while (c != EOF) {
        if (c != ' ') {
            putchar(c);
            c = getchar();
        } else {
            putchar(c);
            while (c == ' ') {
                c = getchar();
            }
        }
    }
    printf("done.\n");
    return 0;
}
