/* program to get age and height from user
   enter the details and they'll be printed
   out */

#include <stdio.h>

int main() {
    
    int age;
    double height;

    printf("Enter the age: ");
    scanf("%d", &age);

    printf("Enter the height: ");
    scanf("%lf", &height);


    printf("Age = %d", age);
    printf("\nHeight = %.1lf\n", height); 

    return 0;
}
