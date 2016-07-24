#include <stdio.h>
#include <math.h>
#include "source.h"



void simple_sum(void)
{
    // Initialize
    int number1 = 0;
    int number2 = 0;
    
    int result = 0;

    // Read user`s input
    scanf("%d %d", &number1, &number2);
    result = number1 + number2;
    
    // Print result
    printf("%d + %d = %d\n", number1, number2, result);
}


void simple_math(void)
{
    // Initialize
    float number1 = 0;
    float number2 = 0;
    float result = 0;
    char operation;

    // Read user input
    scanf("%f %c %f", &number1, &operation, &number2);

    // Choose correct output
    switch(operation) {
        case '+':
            result = number1 + number2;
            printf("%.1f\n", result);
            break;
        case '-':
            result = number1 - number2;
            printf("%.1f\n", result);
            break;
        case '/':
            result = number1 / number2;
            printf("%.1f\n", result);
            break;
        case '*':
            result = number1 * number2;
            printf("%.1f\n", result);
            break;
        default:
            printf("ERR\n");
            break;
    }
}
