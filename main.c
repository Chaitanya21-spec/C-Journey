#include <stdio.h>

int main() 
{
    
    int num1 , num2 , sum;
    char choice;


    printf("Welcome to the calculator \n");
    printf("1. Addition \n");
    printf("2. Subtraction\n");
    printf("3. Multiplication \n");
    printf("4. Divison \n");
    printf("Enter your choice : \n");
    scanf("%d" , &choice);

    printf("Enter the first number: ");
    scanf("%d" , &num1);

    printf("Enter the second number: ");
    scanf("%d" , &num2);

    switch(choice)
    {
        case 1:
            sum = num1 + num2;
            printf("The sum is: %d\n", sum);
            break;
        case 2:
            sum = num1 - num2;
            printf("The difference is: %d\n", sum);
            break;
        case 3:
            sum = num1 * num2;
            printf("The product is: %d\n", sum);
            break;
        case 4:
            if(num2 != 0) {
                float division = (float)num1 / num2;
                printf("The quotient is: %.2f\n", division);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid choice. Please select a valid option.\n");
    }

    return 0;

}