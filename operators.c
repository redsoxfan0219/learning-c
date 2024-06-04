#include <stdio.h>

int main() {

    float x = 12.00f;

    float y = 14.00f;

    int addition_result = x + y;

    float division_result = x/y;
    int mult_result = x*y;

    printf("\nOriginal X: %f", x);
    printf("\nThe addition result is: %d\n\n", addition_result);
    printf("\nThe division result is: %f\n\n", division_result);
    printf("\nThe multiplication result is: %d\n\n", mult_result);
    printf("\nIncrement:  %f\n", ++x);
    printf("\nDecrement:  %f\n\n", --x);



}