#include <stdio.h>

// Collaborator: Nikos Chalkias
int main() {
    int num1, num2, sum;

    // Prompting user for input
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2); 

    // Calculating the sum of numbers
    sum = num1 + num2; 

    // Printing the result
    printf("The sum of %d and %d is %d\n", num1, num2, sum); 
    return 0; 
}
