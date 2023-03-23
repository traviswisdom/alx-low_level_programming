#include <stdio.h>

void print_9_times_table() {
    int i, result;
    for (i = 0; i <= 10; i++) {
        result = i * 9;
        printf("9 x %d = %d\n", i, result);
    }
}

int main() {
    printf("The 9 times table:\n");
    print_9_times_table();
    return 0;
}

