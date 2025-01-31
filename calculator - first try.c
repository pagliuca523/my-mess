/*comment here*/



int main () {


    float number_a = 0;
    float number_b = 0;


    
    void sum_numbers() {
        float sum_tot= 0;
        printf("You will be realizing a sum of 2 numbers: \n");
         printf("Enter the first number : \n");
         scanf("%f", &#include <stdio.h>
#include <stdlib.h>number_a);
         printf("Enter the second number : \n");
         scanf("%f", &number_b);
         /*printf("%.2f & %.2f\n", number_a,number_b);*/
         sum_tot = number_a+number_b;
         printf("Final result is: %2.f\n", sum_tot);
    break;
               

    }
    void deduction_numbers() {
        float sum_tot= 0;
        printf("You will be realizing a minus of 2 numbers: \n");
         printf("Enter the first number : \n");
         scanf("%f", &number_a);
         printf("Enter the second number : \n");
         scanf("%f", &number_b);
         /*printf("%.2f & %.2f\n", number_a,number_b);*/
         sum_tot = number_a-number_b;
         printf("Final result is: %2.f\n", sum_tot);
               

    }


    void multiply_numbers() {
        float sum_tot= 0;
        printf("You will be realizing a multiply of 2 numbers: \n");
         printf("Enter the first number : \n");
         scanf("%f", &number_a);
         printf("Enter the second number : \n");
         scanf("%f", &number_b);
         /*printf("%.2f & %.2f\n", number_a,number_b);*/
         sum_tot = number_a*number_b;
         printf("Final result is: %2.f\n", sum_tot);
    }
    
    void division_numbers() {
        float sum_tot= 0;
        printf("You will be realizing a division of 2 numbers: \n");
         printf("Enter the first number : \n");
         scanf("%f", &number_a);
         printf("Enter the second number : \n");
         scanf("%f", &number_b);
         /*printf("%.2f & %.2f\n", number_a,number_b);*/
         sum_tot = number_a/number_b;
         printf("Final result is: %2.f\n", sum_tot);
    }

    int i =0;
    while (i <= 5){

        if (i == 5){
            break;
        }
       printf("This calculator accept 4 different methods of calculus [Sum, Minus, Division and Multiplication]: \nFor each there is a Number:\n[1]Sum\n[2]Minus\n[3]Division\n[4]Multiplication\nTo Exit press 5\n"); 
       printf("Enter the number of choice: \n");
       scanf("%d", &i);

       if(i == 1){
        sum_numbers();
            break;

       }



    }
   sum_numbers();
   multiply_numbers();
   division_numbers();
   deduction_numbers();

   return EXIT_SUCCESS;

}