#include <stdio.h>
#include <stdlib.h>

int main()
{
    int anne,mois,jours,bissextile;
    printf("entrer un jour :");
    scanf("%d",&jours);
    printf("entrer une anne :");
    scanf("%d",&anne);

    if (anne % 4 != 0){
        printf( "l'année %d est bissextile",anne );
    }
    else
        printf("l'année %d est non bissextile",anne);


     if (mois>0 || mois>12)
        printf("veuiller entrer un nombre entre 1-12");

        else

     switch (mois) {
            case 4: jours = 30;
            case 6: jours = 30;
            case 9: jours = 30;
            case 11: jours = 30;

                break;
            case 2:
                jours = (bissextile) ? 29 : 28;
                break;
            default:
                jours = 31;
                break;}


    return 0;
}
