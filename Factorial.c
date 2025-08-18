#include <stdio.h>

/* Two type of fruction
    1. recursive
    2. iterative
*/
int recursive_factorial(int x){
    if (x == 1 || x == 0) {
        return 1;
    } else {
        return x * recursive_factorial(x - 1);
    }
}

int iterative_factorial(int x){
    if (x == 1 || x == 0) {
        return 1;
    }
    else {
        return x * iterative_factorial(x - 1);
    }
}

int main() {
    int x;
    printf("Enter a value for get the factorial value : ");
    scanf("%d", &x);

    printf("Recursive Method : %d is the Factorial of %d\n", recursive_factorial(x), x);
    printf("Iterative Method : %d is the Factorial of %d\n", iterative_factorial(x), x);
    return 0;
}