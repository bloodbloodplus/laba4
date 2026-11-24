#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Russian");
    int A, B, C;

    printf("Введите уровень силы первого героя (A): ");
    scanf("%d", &A);
    printf("Введите уровень силы второго героя (B): ");
    scanf("%d", &B);
    printf("Введите уровень силы третьего героя (C): ");
    scanf("%d", &C);

    if ((A % 3 == 0) && (B % 3 == 0) && (C % 3 == 0)) {
        printf("Способность тройной удар активирована!\n");
    }
    else {
        printf("Способность тройной удар не активирована.\n");
    }

    return 0;
}
