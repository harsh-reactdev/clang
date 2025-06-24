#include<stdio.h>

void calculator(int m, int n, char op){
    switch(op){
        case '+':
            printf("%d\n", m + n);
            return;

        case '-':
            printf("%d\n", m - n);
            return;
        
        case '*':
            printf("%d\n", m * n);
            return;
        
        case '/':
            printf("%d\n", m / n);
            return;

        case '%':
            printf("%d\n", m % n);
            return;

        default:
            printf("Invalid operator.!");
            return;
        }
        return;
}

int main() {
    int a, b;
    char op;
    printf("Enter the first input : ");
    scanf("%d", &a);
    printf("Enter the second input : ");
    scanf("%d", &b);
    printf("Enter the operator : ");
    scanf(" %c", &op);

    // printf("%c", op);
    calculator(a, b, op);
    return 0;
}