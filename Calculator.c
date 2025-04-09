#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
    // Variables
    char cont;
    int op;
    float num1, num2, result;

    do {
    
        printf("Choose the respective number for the operation you want to make: \n");
        printf("1. Sum      \t 2. Subtraction \t 3. Multiplication\n");
        printf("4. Division \t 5. Exponential \t 6. Root\n");
        printf("Your answer: ");
            scanf("%d", &op);

        printf("What is the first number you want to use?\n");
            scanf("%f", &num1);
        printf("And the second number? (Exponent or index if needed)\n");
            scanf("%f", &num2);

        switch (op) {
            case 1:
                result = num1 + num2;
                printf("Result: %.2f + %.2f = %.2f\n", num1, num2, result);
                break;
            case 2:
                result = num1 - num2;
                printf("Result: %.2f - %.2f = %.2f\n", num1, num2, result);
                break;
            case 3:
                result = num1 * num2;
                printf("Result: %.2f * %.2f = %.2f\n", num1, num2, result);
                break;
            case 4:
                if (num2 == 0) {
                    printf("Error: 0 is not a valid input!\n");
                } 
                else {
                    result = num1 / num2;
                    printf("Result: %.2f / %.2f = %.2f\n", num1, num2, result);
                }
                break;
            case 5:
                result = pow(num1, num2);
                printf("Result: %.2f ^ %.2f = %.2f\n", num1, num2, result);
                break;
            case 6:
                if (num2 == 0) {
                    printf("Error: 0 is not allowed as an index!\n");
                } 
                else {
                    result = pow(num1, 1.0 / num2);
                    printf("Result: %.2f", result);
                }
                break;
            default:
                printf("Invalid input!\n");
        }
    

        printf("Want to continue? (Y/N): ");
            scanf(" %c", &cont);
        system("cls");
    } while (cont == 'y' || cont == 'Y');

    system("pause");
    return 0;
}