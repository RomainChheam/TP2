#include <stdio.h>

int main() {
    if (1) {
        printf("ok\n");
    } else {
        printf("nope\n");
    }
    return 0;
}

// expected identifier or '(' before 'return'
// expected a declaration
// expected identifier or '(' before '}' token
// expected a declaration