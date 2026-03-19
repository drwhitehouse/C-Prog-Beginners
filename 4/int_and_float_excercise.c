#include <stdio.h>

int main() {
   
    // first define integer and float variables 
    int myInt;
    float myFloat;

    // print an imput prompt and get input (note format specifiers)
    printf("Enter an integer and a float: ");
    scanf("%d %f", &myInt, &myFloat);
    
    // print the results (note format specifiers)
    printf("Integer: %d\n", myInt);
    printf("Float: %f\n", myFloat);

    return 0;
}
