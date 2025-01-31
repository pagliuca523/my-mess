#include <stdio.h>
#include <stdlib.h>
// Function prototypes
void sum_numbers();
void deduction_numbers();
void multiply_numbers();
void division_numbers();
int main() {
    int choice = 0;
    while (choice != 5) {
        printf("This calculator accept 4 different methods of calculus [Sum, Minus, Division and Multiplication]: \nFor each there is a Number:\n[1]Sum\n[2]Minus\n[3]Division\n[4]Multiplication\nTo Exit press 5\n");
        printf("Enter the number of choice: \n");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                sum_numbers();
                break;
            case 2:
                deduction_numbers();
                break;
            case 3:
                division_numbers();
                break;
            case 4:
                multiply_numbers();
                break;
            case 5:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice. Please choose again.\n");
                break;
        }
    }
    return EXIT_SUCCESS;
}
void sum_numbers() {
    float number_a = 0;
    float number_b = 0;
    float sum_tot = 0;
    printf("You will be realizing a sum of 2 numbers: \n");
    printf("Enter the first number : \n");
    scanf("%f", &number_a);
    printf("Enter the second number : \n");
    scanf("%f", &number_b);
    sum_tot = number_a + number_b;
    printf("Final result is: %.2f\n", sum_tot);
}
void deduction_numbers() {
    float number_a = 0;
    float number_b = 0;
    float sum_tot = 0;
    printf("You will be realizing a minus of 2 numbers: \n");
    printf("Enter the first number : \n");
    scanf("%f", &number_a);
    printf("Enter the second number : \n");
    scanf("%f", &number_b);
    sum_tot = number_a - number_b;
    printf("Final result is: %.2f\n", sum_tot);
}
void multiply_numbers() {
    float number_a = 0;
    float number_b = 0;
    float sum_tot = 0;
    printf("You will be realizing a multiply of 2 numbers: \n");
    printf("Enter the first number : \n");
    scanf("%f", &number_a);
    printf("Enter the second number : \n");
    scanf("%f", &number_b);
    sum_tot = number_a * number_b;
    printf("Final result is: %.2f\n", sum_tot);
}
void division_numbers() {
    float number_a = 0;
    float number_b = 0;
    float sum_tot = 0;
    printf("You will be realizing a division of 2 numbers: \n");
    printf("Enter the first number : \n");
    scanf("%f", &number_a);
    printf("Enter the second number : \n");
    scanf("%f", &number_b);
    if (number_b != 0) {
        sum_tot = number_a / number_b;
        printf("Final result is: %.2f\n", sum_tot);
    } else {
        printf("Error: Division by zero!\n");
    }
}