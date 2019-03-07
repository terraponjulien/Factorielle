#include <stdio.h>
#include <stdlib.h>

int main()
{
    int chiffre;

    printf("asdasdas");

    scanf("%d", &chiffre);

    FonctionFactorielle(chiffre);
}

/** \brief compute the factorial of number chiffre
 *
 * \param chiffre int an integer
 * \return void
 *
 */
void FonctionFactorielle(int chiffre)
{
    for(int i=chiffre-1; i>0; i--){
        chiffre=chiffre*i;
    }
    printf("%d", chiffre);
    return 0;
}
