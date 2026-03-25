/*
    data types lower in the hierarchy are always
    converted to those higher in the hierarchy:
 
    long double
    double
    float
    long
    int
    short
    char

    e.g. int + char (char is converted to its int value)

    The exception to this is when assignments are made, 
    in which case the data type on the right of the operator is
    always converted to that of the data type on the left
    (see example 5)
    
*/

#include <stdio.h>

int main() {
    
    // define variables
   
    int a = 5;
    int b = 9;
    char aChar = '5';
    int result = a + b;
    int resultIntChar = aChar + b;
    double aDouble = 5.67 ;
    int resultIntDouble = aDouble + b;
    double resultIntDoubleDouble = aDouble + b;
    int aAssignment = 5.67;
    double expA = 5.67;
    int expB = 9;
    // expA is explicitly converted to an int:
    int expResult = (int)expA + expB;
    int expDivA = 9;
    int expDivB = 2;
    // explicitly convert to doubles (we only need to do expDivA
    // since expDivB is implicitly converted:
    double expDivResult = (double)expDivA / expDivB;

    // print results

    // implicit type conversion:

    // 1. simple integer addition
    printf("integer addition = %d\n", result);
    // 2. the char is converted to its ascii value (which happens to be an integer)
    printf("integer + char addition = %d\n", resultIntChar);
    // 3. here the integer b is converted to a double: 9.0000
    // this is added to aDouble but the result is stored as an int!
    printf("integer + double addition (store result as int) = %d\n", resultIntDouble);
    // 4. same again but this time we store as a double:
    printf("integer + double addition (store result as double) = %lf\n", resultIntDoubleDouble);
    // 5. type conversion via assignment
    printf("type conversion via assignment = %d\n", aAssignment);

    // explicit type conversion:

    // 6. explicitly convert double to int:
    printf("explicitly convert double to int = %d\n", expResult);
    // 7. explictly convert ints to doubles for division:
    printf("explicitly convert ints to doubles = %lf\n", expDivResult);

    return 0;
}
