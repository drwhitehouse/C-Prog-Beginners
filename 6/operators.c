/*

   Addition             +
   Subtraction          -
   Multiplication       *
   Division             /
   Remainder (modulus)  %
   Increment            ++
   Decrement            --

*/

#include <stdio.h>

int main() {
    
    // define variables
    int x = 12;
    int y = 8;
    int result = x + 8;
    double xDouble = 12.57;
    double resultDoubleAddition = xDouble + 8.67;
    double resultDoublePlusInt = xDouble + y;
    double resultDoubleSub = xDouble - 8.67;
    double resultDoubleMult = xDouble * 8.67;
    double xFloatingPoint = 12.00;
    int xMultipleOperators = 4 / 2 + 6 * 5 - 1;

    // we only get the quotient, remainder is ignored:
    int resultIntDiv = x / 8;

    // we use doubles to get the remainder:
    double resultFloatingPointDiv = xFloatingPoint / 8.00;

    // we only get the quotient, remainder is ignored:
    int resultModulus = x % 8;

    //print result (using variable):
    printf("result = %d\n", result);

    //print result (without variable):
    printf("result = %d\n", x + 8);

    //print result (floating point):
    printf("result = %.2lf\n", resultDoubleAddition);

    //print result (double + int):
    printf("result = %.2lf\n", resultDoublePlusInt);

    //print result (double subtraction):
    printf("result = %.2lf\n", resultDoubleSub);

    //print result (double multiplication):
    printf("result = %.2lf\n", resultDoubleMult);

    //print result (integer division):
    printf("result = %d\n", resultIntDiv);

    //print result (floating point division):
    printf("result = %.2lf\n", resultFloatingPointDiv);
    
    //print result (modulus) - this only works with the int type:
    printf("result = %d\n", resultModulus);

    //print (increment operator) (note that this changes the value of the operand):
    printf("result = %d\n", ++x);

    //print (decrement operator) (we set it to 13 above so its now back to 12):
    printf("result = %d\n", --x);

    //print (multiple operators):
    printf("result = %d\n", xMultipleOperators);

    return 0;
}
