#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// This code is a basic calculator created by Zakaria Omoro.

int main() {
    float value1, value2, Ans;
    char operator;

    printf("Please enter the first value: ");
    scanf("%f", &value1);

    printf("Please select an operator:\n\n '+'\t or\t '-'\t or\t '*'\t or\t '/'\n\nYour selection: ");
    scanf(" %c", &operator);

    while (operator != '/' && operator != '+' && operator != '*' && operator != '-') {
        printf("\nPlease select a valid operator: ");
        scanf(" %c", &operator);
    }

    printf("Please enter the second value: ");
    scanf("%f", &value2);

    while (operator == '/' && value2 == 0) {
        printf("Cannot divide by zero. Please enter the second value again: ");
        scanf("%f", &value2);
    }

    switch (operator) {
        case '+':
            Ans = value1 + value2;
            break;
        case '-':
            Ans = value1 - value2;
            break;
        case '*':
            Ans = value1 * value2;
            break;
        case '/':
            Ans = value1 / value2;
            break;
    }

    printf("\n\nANSWER!\t\t%.2f\t%c\t%.2f\t=\t%.2f", value1, operator, value2, Ans);

    return 0;
}
