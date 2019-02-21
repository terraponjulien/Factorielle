#include <stdio.h>
#include <stdlib.h>

int main()
{
    int chiffre, i, Res;

    scanf("%d", &chiffre);

    for(i=chiffre-1; i>0; i--){
        chiffre=chiffre*i;
    }
    printf("%d", chiffre);
    return 0;
}
