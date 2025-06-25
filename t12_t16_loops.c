#include<stdio.h>

int main()
{
    // for
    for (int i = 1; i < 100; i++){
        if(i%99 == 0){
            printf("\n");
            break;
        }
        else{
            printf("%d ", i);
            continue;
        }
    }

    int j = 1;
    while (j < 10)
    {
        printf("%d ", j);
        j++;
    }

    int k = 1;
    do{
        printf("%d ", k);
        k++;
    } while (k < 10);

    return 0;
}
