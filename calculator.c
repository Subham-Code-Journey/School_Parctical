#include <stdio.h>

int main() {
    int inp1, inp2;
    char result;

    printf("Enter the first number : ");
    scanf("%d", &inp1);

    printf("Enter the second number : ");
    scanf("%d", &inp2);

    printf("\
        \n 1.\t + \t (Addtion)\
        \n 2.\t - \t (Subtraction)\
        \n 3.\t * \t (Multiplication)\
        \n 4.\t / \t (Division)\
        \n");

    printf("\nInput your operator : ");
    scanf(" %c", &result);

    while (result != '+' && result != '-' && result != '*' && result != '/') {
        printf("Invalid operator. Please enter one of +, -, *, / : ");
        scanf(" %c", &result);
    }

    switch (result) {
        case '+':
            printf("%d + %d = %d \n", inp1, inp2, inp1 + inp2);
            break;
        case '-':
            printf("%d - %d = %d \n", inp1, inp2, inp1 - inp2);
            break;
        case '*':
            printf("%d * %d = %d \n", inp1, inp2, inp1 * inp2);
            break;
        case '/':
            if (inp2 != 0)
                printf("%d / %d = %d \n", inp1, inp2, inp1 / inp2);
            else
                printf("Error: Division by zero is not allowed.\n\n\
                    Your answer is infinity");
            break;
    }

    return 0;
}