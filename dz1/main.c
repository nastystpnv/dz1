#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> 

int main() {
    char operation[5]; 
    double n1, n2, result;
    while (1) {
        printf("введите первое число: ");
        if (scanf("%lf", &n1) != 1) { 
            printf("некорректный ввод\n");
            continue;
        }
        printf("¬ведите операцию (+, -, *, /): ");
        scanf("%4s", operation); 
        if (strcmp(operation, "exit") == 0) {
            break;
        }
        printf("введите второе число: ");
        if (scanf("%lf", &n2) != 1) { 
            printf("некорректный ввод\n");
            continue;
        }

        if (strcmp(operation, "+") == 0) {
            result = n1 + n2;
        }
        else if (strcmp(operation, "-") == 0) {
            result = n1 - n2;
        }
        else if (strcmp(operation, "*") == 0) {
            result = n1 * n2;
        }
        else if (strcmp(operation, "/") == 0) {
            if (n2 != 0) {
                result = n1 / n2;
            }
            else {
                printf("делить на ноль нельз€\n");
                continue;
            }
        }
        else {
            printf("некорректный ввод\n");
            continue;
        }

        printf("%.2f\n", result);
    }

    return 0;
}