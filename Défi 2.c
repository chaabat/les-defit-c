#include <stdio.h>
#include <stdlib.h>

int main()
{
    float N;
    printf("entrer un nombre :");
    scanf("%f",&N);

    if (N<0){
        printf("le nombre %.2f est negative .",N);
    }
        else
            printf("le nombre %.2f est possitive .",N);
    return 0;
}
