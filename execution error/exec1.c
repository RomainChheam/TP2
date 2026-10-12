#include <stdio.h>

int main() {
    int a = 2;
    int b = 10000;
    int c = a / b;  // crash / comportement indéfini
    printf("%d\n", c);
    return 0;
}
