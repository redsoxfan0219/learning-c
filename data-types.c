#include <stdio.h>

int main() {

/*

int (4 bytes) | %d for printing
double (8 bytes) | %lf for printing
float (4 bytes) | %f for printing
char (1 byte) | %c for printing

*/

    int age = 25;
    double bigno = 250000000000000.19;
    float decimal = 25.54f;
    char dog = 'd';

    printf("\nAge: %d", age);
    printf("\nBig Number: %.2lf", bigno);
    printf("\nDecimal: %f", decimal);
    printf("\nCharacter: %c\n\n", dog); 

}