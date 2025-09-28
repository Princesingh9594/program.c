#include <stdio.h>

int main() {
    int num1, num2;
    char op;

  
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &op);  // Notice the space before %c to consume newline

    printf("Enter second number: ");
    scanf("%d", &num2);

    
    switch(op) {
        case '+':
            printf("Result = %d\n", num1 + num2);
            break;
        case '-':
            printf("Result = %d\n", num1 - num2);
            break;
        case '*':
            printf("Result = %d\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("Result = %d\n", num1 / num2);
            else
                printf("Error: Division by zero is not allowed.\n");
            break;
        case '%':
            if (num2 != 0)
                printf("Result = %d\n", num1 % num2);
            else
                printf("Error: Modulo by zero is not allowed.\n");
            break;
        default:
            printf("Invalid operator! Please use +, -, *, /, or %%.\n");
    }

    return 0;
}
