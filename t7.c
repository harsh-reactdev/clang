#include<stdio.h>

int adder(int arg1, int arg2){
    return arg1 + arg2;
}

int diff(int arg1, int arg2){
    return arg1 - arg2;
}

int times(int arg1, int arg2){
    return arg1 * arg2;
}

int quot(int arg1, int arg2){
    return arg1 / arg2;
}

int mod(int arg1, int arg2){
    return arg1 % arg2;
}

int main(int argc, char const *argv[])
{
    int a, b;
    
    printf("Enter value for a : ");
    scanf("%d", &a);
    printf("Enter value for b : ");
    scanf("%d", &b);

    printf("The sum is %d\n", adder(a, b));
    printf("The diff is %d\n", diff(a, b));
    printf("The prod is %d\n", times(a, b));
    printf("The quot is %d\n", quot(a, b));
    printf("The reaminder is %d\n", mod(a, b));

    return 0;
}
