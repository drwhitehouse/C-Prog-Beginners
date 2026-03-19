#include <stdio.h>

int main() {
    
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    // the ampersand represents the memory address of the 'age' variable
    printf("Your age is: %d\n", age);

    return 0;
}
