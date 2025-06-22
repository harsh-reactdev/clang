#include<stdio.h>
#define PI 3.14

int main(){
    int a = 10;
    float b = 8.912;

    // printf("The value of a is %d and the value of b is %f\n", a, b); //5 digit post deciaml point precision by default for floating point numbers
    // printf("The value of a is %d and the value of b is %.2f\n", a, b); Prints floating point number with only 2 digits precision after decimal point

    // constants
    const int c = 9;
    // c = 10; Throws error as c is a constant
    // PI = 7; Likewise
    // printf("This is it");

    return 0;
}