#include <stdio.h>

const int GLOBAL_RATE = 10;

void calculate() {
    const int LOCAL_BONUS = 50;

    printf("GLOBAL_RATE = %d\n", GLOBAL_RATE);
    printf("LOCAL_BONUS = %d\n", LOCAL_BONUS);
}

int main() {
    calculate();

    printf("GLOBAL_RATE = %d\n", GLOBAL_RATE);

    // Try to print -> LOCAL_BONUS in main >> Discuss the result
    // printf("LOCAL_BONUS in main = %d\n", LOCAL_BONUS);

    return 0;
}
