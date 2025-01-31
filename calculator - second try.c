/*Code designed to do a simple operation with 2 elements, this calculator will be able to do 4 different types of operations*/

#include <stdio.h>
#include <stdlib.h>


void sum_number();
void minus_number();
void multiply_number();
void division_number();

int main(){
    int choice = 0;
    
    while (choice != 5){
        printf("This calculator can do 4 differents operations: \n");
        printf("1 - Sum\n2 - Minus\n3 - Multiplication\n4 - Division\n5- Exit\n");
        printf("Choose a number between the options above: \n");
        scanf("%d", &choice);

        switch (choice){
            case 1:
                sum_number();
                break;
             case 2:
                minus_number();
                break;
            case 3:
                multiply_number();
                break;
            case 4:
                division_number();
                break;
            case 5:
                printf("Exiting the calculator");
                break;
            default:
                printf("Not a correct option, please choose from 1 to 5");
                break;

                                 
                           
                           
        }
    
    }

    return 0;
}


void sum_number(){
    float number_a = 0;
    float number_b = 0;
    float result_calc = 0;

    printf("You have selected sum, and you will be able to sum 2 values\n");
    printf("Place the first number: \n");
    scanf("%f", &number_a);
    printf("Place the second number: \n");
    scanf("%f", &number_b);
    result_calc = number_a+number_b;
    printf("Final Result is: %.2f\n",result_calc);
}

void minus_number(){
    float number_a = 0;
    float number_b = 0;
    float result_calc = 0;

    printf("You have selected sum, and you will be able to subtract 2 values\n");
    printf("Place the first number: \n");
    scanf("%f", &number_a);
    printf("Place the second number: \n");
    scanf("%f", &number_b);
    result_calc = number_a-number_b;
    printf("Final Result is: %.2f\n",result_calc);
}

void multiply_number(){
    float number_a = 0;
    float number_b = 0;
    float result_calc = 0;

    printf("You have selected sum, and you will be able to multiply 2 values\n");
    printf("Place the first number: \n");
    scanf("%f", &number_a);
    printf("Place the second number: \n");
    scanf("%f", &number_b);
    result_calc = number_a*number_b;
    printf("Final Result is: %.2f\n",result_calc);
}

void division_number(){
    float number_a = 0;
    float number_b = 0;
    float result_calc = 0;

    printf("You have selected sum, and you will be able to divide 2 values\n");
    printf("Place the first number: \n");
    scanf("%f", &number_a);
    printf("Place the second number: \n");
    scanf("%f", &number_b);
    result_calc = number_a/number_b;
    printf("Final Result is: %.2f\n",result_calc);

}