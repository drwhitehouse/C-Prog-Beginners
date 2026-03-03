#include <stdio.h>

/*
int     (4 bytes) | %d
double  (8 bytes) | %lf
float   (4 bytes) | %f
char    (1 byte)  | %c
*/

int main() {
    
    int intNumber = 10;
    printf("int = %d\n", intNumber);

    double doubleNumber = 12.45;
    printf("double = %lf\n", doubleNumber);
    // here we use the full precision of double (6 places after the decimal point)
    printf("double (format 2 digits after decimal point)  = %.2lf\n", doubleNumber);
    // we only want 2 places after the decimal point
    
    float floatNumber = 10.9f;
    /*
    we use "10.9f" we are *explicitly* declaring that "10.9" should be considered as having float precision.
    in this simple case its not really necessary because an implicit cast results in the same output.
    */
    printf("float = %f\n", floatNumber);
    printf("float (format 1 digit after decimal point) = %.1f\n", floatNumber);
    // we can format the output so only one decimal place is shown in the same way as before.

    double doubleExponential =  5.5e6;
    printf("double (exponential) = %lf\n", doubleExponential);

    char character = 'Z';
    // note the single quotes here...
    printf("my character = %c\n", character);
    // internally the char is stored as an integer so we can print it using the integer format specifier:
    printf("my character (printed using integer format specifier) = %d\n", character);

    printf("size of intNumber = %zu\n", sizeof(intNumber));
    printf("size of doubleNumber = %zu\n", sizeof(doubleNumber));
    // when variables are stored in memory their size is represented as a "size_t" type variable.
    // %zu is the format specifier for such a variable.

    return 0;
}
