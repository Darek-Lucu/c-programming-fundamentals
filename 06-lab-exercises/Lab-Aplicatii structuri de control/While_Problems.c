#include <stdlib.h>
#include <stdio.h>

int main()
{
    //------------------------------------------------------------------------------------------

    /* Problema 1
    int n, sum = 0, i = 1;

    do{
    printf("Dati o valoare n(natural): ");
    scanf("%d", &n);
    }while(n<0);


    while (i <= n)
    {
        sum += i;
        i++;
    }
    printf("Suma %d nr naturale este: %d", n, sum);
    */

    //------------------------------------------------------------------------------------------

    /* Problema 2
    int n=1, sum = 0;

    printf("Scrieti un sir de nr intregi(0 pentru oprire):\n");

    while (n != 0)
    {
        scanf("%d", &n);
        sum += n;
    }
    printf("Suma este: %d", sum);
    */

    //------------------------------------------------------------------------------------------

    /* Problema 3
    int n=1, sumPar=0,prodImp=1;

    printf("Scrieti un sir de nr intregi(0 pentru oprire): \n");

    while (n!=0){
        scanf("%d", &n);
        if(n%2==0){
            sumPar+=n;
        }
        else prodImp*=n;
    }
    printf("Suma nr pare este: %d si produsul nr impare este: %d", sumPar,prodImp);
    */
    //------------------------------------------------------------------------------------------

    /* Problema 4
    int n=1, nrPare[100], i=0;

    printf("Scrieti un sir de nr intregi(0 pentru oprire): \n");
    while (n!=0){
        scanf("%d", &n);
        if(n==0) break;
        if(n%2!=0) continue;
        if(i<100)nrPare[i++] = n;
        else printf("Vectorul este plin. Numerele suplimentare sunt ignorate.\n");
    }

    printf("Numerele pare sunt: ");
    for(int j=0; j<i; j++){
        printf("%d ", nrPare[j]);
    }
    */
    //------------------------------------------------------------------------------------------

    // Problema 5
    int n = 1, nrPoz = 0, nrNeg = 0;

    printf("Scrieti un sir de nr intregi(0 pentru oprire): \n");
    while (n != 0)
    {
        scanf("%d", &n);
        if (n > 0)
            nrPoz++;
        else if (n < 0)
            nrNeg++;
    }

    printf("Numarul de numere pozitive este: %d\n", nrPoz);
    printf("Numarul de numere negative este: %d\n", nrNeg);

    //------------------------------------------------------------------------------------------

    return 0;
}