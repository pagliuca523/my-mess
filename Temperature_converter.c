#include <stdio.h>
#include <stdlib.h>


void celsius_to_fahrenheit();
void fahrenheit_to_celsius();

int main(){
    int choice = 0;

    while(choice !=3){
        printf("Converter of temperature\n");
        printf("1 - Celsius to Fahrenheit\n2 - Fahrenheit to Celsius\n3 - Exit\n");
        scanf("%d",&choice);

        switch (choice){
            case 1:
                celsius_to_fahrenheit();
                break;
            case 2:
                fahrenheit_to_celsius();
                break;
            case 3:
                printf("Exiting");
                break;
            default:
                printf("Select a valid number");
                break;
        }
    }
    return 0;
}

void celsius_to_fahrenheit(){
    float celsius_n = 0;
    float result_tot = 0;
    int option = 0;

    printf("Input the value for Celsius: \n");
    scanf("%f", &celsius_n);
    result_tot = (celsius_n*9/5)+32;
    printf("Total value of this conversion: %.2f\n",result_tot);
    printf("Would you like to :\n");
    printf("1 - Back to menu\n2 - Continue\n3 - Exit\n");
    scanf("%d", &option);
    switch (option){
            case 1:
                main();
                break;
            case 2:
                celsius_to_fahrenheit();
                break;
            case 3:
                printf("Exiting");
                break;

    }
}

void fahrenheit_to_celsius(){
    float fahrenheit_n = 0;
    float result_tot = 0;
    int option = 0;

    printf("Input the value for Fahrenheit: \n");
    scanf("%f", &fahrenheit_n);
    result_tot = (fahrenheit_n-32)*5/9;
    printf("Total value of this conversion: %.2f\n",result_tot);
    printf("Would you like to :\n");
    printf("1 - Back to menu\n2 - Continue\n3 - Exit\n");
    scanf("%d", &option);
    switch (option){
            case 1:
                main();
                break;
            case 2:
                fahrenheit_to_celsius();
                break;
            case 3:
                printf("Exiting");
                break;

    }
}
 