#include <stdio.h>

int main() {
    int i;

    // =====================
    // 1. for + continue
    // =====================
    printf("For + continue: ");
    for (i = 1; i <= 10; i++) {
        if (i == 6) {
            continue;
        }
        printf("%d ", i);
    }
    printf("\n");

    // =====================
    // 2. while + continue
    // =====================
    printf("While + continue: ");
    i = 1;
    while (i <= 10) {
        if (i == 6) {
            i++; // เพิ่มค่า i ก่อน continue
            continue;
        }
        printf("%d ", i);
        i++;
    }
    printf("\n");

    // =====================
    // 3. do-while + continue
    // =====================
    printf("Do-while + continue: ");
    i = 1;
    do {
        if (i == 6) {
            i++; // เพิ่มค่า i ก่อน continue
            continue;
        }
        printf("%d ", i);
        i++;
    } while (i <= 10);
    printf("\n");

    return 0;
}

