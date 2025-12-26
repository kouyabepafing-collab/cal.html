#include <stdio.h>
#include <string.h>
#include<ctype.h>

int main(){

    int choix, i, j, tmp, nombre[100];
    float tab[100], l[100];

    printf("Entrer votre choix(1 ou 2): \n");
    printf("1) Ranger par ordre croissant\n 2) Ranger par ordre décroissant\n");
    scanf("%d", &choix);

    if(choix=1){
        printf("Entrer vos différents nombre: \n");
        scanf("%ls", nombre);
    
        if(tab[j] < tab[i]){
            tab[i]=tab[tmp];
            tab[tmp]=tab[j];
            tab[i++]=tab[j--];
            

        
    } printf("Voici l'ordre des nombre %ls\n", nombre);
    }

    return 0;
}