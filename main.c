#include <stdio.h>
#include <stdlib.h>

int main()
{
    int chiffre;

    printf("asdasdas");

    //hello sa joue

    scanf("%d", &chiffre);

    FonctionFactorielle(chiffre);
}

void FonctionFactorielle(int chiffre)
{
    for(int i=chiffre-1; i>0; i--){
        chiffre=chiffre*i;
    }
    printf("%d", chiffre);
    return 0;
}
