#include<stdio.h>

void tablePrinter(int num){
    for (int i = 1; i <= 10; i++){
        printf("%d X %d =  %d\n", num, i, num * i);
    }
}

int main()
{
    int num;
    printf("Enter the number to get its multiplication table : ");
    scanf("%d", &num);

    tablePrinter(num);
    
    return 0;
}
