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

/** \brief compute the factorial of number chiffre
 *
 * \param chiffre int an integer
 * \return void
 *
 */
int FonctionFactorielle(int chiffre)
{
    if(chiffre==1){
        return 1;
    }
    chiffre=chiffre*FonctionFactorielle(chiffre-1);
    return chiffre;
}

