#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a,b,c;
    printf("entrer le premiere nombre: ");
    scanf("%lf",&a);
    printf("entrer le deuxieme nombre: ");
    scanf("%lf",&b);
    printf("entrer le troisieme nombre: ");
    scanf("%lf",&c);

    if (a>=b && a>=c){
        printf("le nombre %.1lf est le plus grand",a);
    }
    else if (b>=a && b>=c){
        printf("le nombre %.1lf est le plus grand",b);
    }
    else
        printf("le nombre %.1lf est le plus grand",c);
    return 0;
}
