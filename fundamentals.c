#include<stdio.h>

int adder(int arg1, int arg2){
    return arg1 + arg2;
}

int main(int argc, char const *argv[])
{
    int a, b;
    printf("Enter value for a : ");
    scanf("%d", &a);
    printf("Enter value for b : ");
    scanf("%d", &b);

    printf("The sum is %d\n", adder(a, b));
    return 0;
}
