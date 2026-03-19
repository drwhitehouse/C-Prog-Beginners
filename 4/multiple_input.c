#include <stdio.h>

int main() {
    
    double myDouble;
    char myChar;

    printf("Enter a double and char: ");
    scanf("%lf %c", &myDouble, &myChar);
    

    printf("Double: %lf\n", myDouble);
    printf("Character: %c\n", myChar);

    return 0;
}
