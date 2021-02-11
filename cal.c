#include <stdio.h>
int main() {
    char oprtr;
    double n1, n2;
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &oprtr);
    printf("Enter two numbers: ");
    scanf("%lf %lf", &n1, &n2);

    switch (oprtr) {
    case '+':
        printf("%.2f + %.2f = %.2f", n1, n2, n1 + n2);
        break;
    case '-':
        printf("%.2f - %.2f = %.2f", n1, n2, n1 - n2);
        break;
    case '*':
        printf("%.2f * %.2f = %.2f", n1, n2, n1 * n2);
        break;
    case '/':
        printf("%.2f / %.2f = %.2f", n1, n2, n1 / n2);
        break;
        // operator doesn't match any case constant
    default:
        printf("Error! operator is not correct");
    }

    return 0;
}