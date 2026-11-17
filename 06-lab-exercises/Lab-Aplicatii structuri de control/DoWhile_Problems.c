#include <stdio.h>

int main()
{
    //------------------------------------------------------------------------------------------

    /* Problema 6
    int n = 1, sum = 0, i = 1;

    printf("Dati o valoare n: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Valoarea n trebuie sa fie pozitiva!");
        return 0;
    }

    if (n == 0)
    {
        printf("Suma este: 0");
        return 0;
    }

    do
    {   sum += i;
        i++;
    } while (i<=n);

    printf("Suma este: %d", sum);
    */

    //------------------------------------------------------------------------------------------

    /* Problema 7
    int latura, perimetru = 0, aria = 0;

    do
    {
        printf("Dati latura patratului: ");
        scanf("%d",&latura);
    }while (latura<=0);

    perimetru = latura*4;
    aria = latura*latura;

    printf("Perimetrul patratului este: %d\n",perimetru);
    printf("Aria patratului este: %d",aria);
    */

    //------------------------------------------------------------------------------------------

    // Problema 8
    int n, sum = 0, i = 0;
    float mediaAritmetica = 0.0;
    printf("Scrieti un sir de nr intregi(0 pentru oprire):\n");

    do
    {
        scanf("%d", &n);
        if (n >= 3 && n <= 10)
        {
            sum += n;
            i++;
        }

    } while (n != 0);

    //Daca nu s-au citit numere in intervalul [3,10], evitam impartirea la zero
    if (i == 0)
    {
        printf("Media aritmetica este: 0");
        return 0;
    }

    mediaAritmetica = (float)sum / i;

    printf("Media aritmetica a numerelor din intervalul [3,10] este: %.2f", mediaAritmetica);

    return 0;
}