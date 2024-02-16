// C Program to subtract two numbers

#include <stdio.h>

int main() {
    
    int num1, num2, diff;
    
    printf("Enter the first number: ");
    scanf("%d", &num1);
    
    printf("Enter the second number: ");
    scanf("%d", &num2);
    
    // Subtract both numbers and store result in the diff variable
    diff = num1 - num2;
    
    // Print the result
    printf("The difference of two numbers is: %d", diff);
    
    return 0;

}