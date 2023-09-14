#include <stdio.h>
#include <stdlib.h>

int main()
{

    char cara[1];
    printf("veuillez entrer un cararctere :");
    scanf("%s",&cara);

    if (cara=='a' ||cara== 'e'||cara== 'i'||cara=='o'||cara=='u'||cara== 'y'){
        printf("le caractere %s est un voyelle",cara);

    }
    else
        printf("le caractere %s est un consonne",cara);
    return 0;
}
