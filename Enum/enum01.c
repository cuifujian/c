#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
enum colors {
    RED,
    BLUE,
    YELLOW,
};
int main(void) {
    // enum colors colors;
    enum colors color;
    color = BLUE;
    printf("%d\n", RED);     // 0
    printf("%d\n", YELLOW);  // 1
    printf("%d\n", BLUE);    // 2
    printf("%d\n", color);
}