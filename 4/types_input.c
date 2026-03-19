#include <stdio.h>

int main() {
    
    double myDouble;
    char myChar;

    printf("Enter double: ");
    scanf("%lf", &myDouble);
    
    printf("Enter character: ");
    scanf("\n%c", &myChar);

    printf("Double: %lf\n", myDouble);
    printf("Character: %c\n", myChar);

    return 0;
}
