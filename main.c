#include <stdio.h>
#include <stdlib.h>

int main()
{
    int chiffre;

    printf("asdasdas");

    //hello sa joue

    scanf("%d", &chiffre);

    FonctionFactorielle(chiffre);
    printf("%d", FonctionFactorielle(chiffre));
}

int FonctionFactorielle(int chiffre)
{
    if(chiffre==1){
        return 1;
    }
    chiffre=chiffre*FonctionFactorielle(chiffre-1);
    return chiffre;
}

