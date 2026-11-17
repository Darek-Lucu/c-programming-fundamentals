#include <stdio.h>

int main()
{
    //------------------------------------------------------------------------------------------

    /* Prblema 9
    int n,sum=0;

    printf("Dati un numar n(natural): ");
    scanf("%d", &n);

    for(int i=1;i<=n;i++)
    {
        sum+=i;
    }

    printf("Suma primelor %d numere naturale este: %d",n,sum);
    */

    //------------------------------------------------------------------------------------------

    /* Problema 10
    int n, sum=0;

    do{
        printf("Dati un numar n(natural): ");
        scanf("%d", &n);
    }while(n<=0);


    for(int i=1;i<=n;i++){
        sum+=i;
        if(sum>100) {
            sum -=i;
            break;
        }
    }
    printf("Suma nr de la 1 la %d, mai mica decat 100 este: %d",n,sum);
    */

    //------------------------------------------------------------------------------------------

    /* Problema 11
    int n;
    unsigned int factorial = 1;

    printf("Factorial din: ");
    scanf("%d",&n);

    for (int i = n; i > 1 ; i--)
    {
        factorial *= i;
    }

    printf("%d! este: %d",n,factorial);
    */

    //------------------------------------------------------------------------------------------

    /* Problema 12
    int b, e;
    double rezultat = 1.0;

    printf("Dati o baza: ");
    scanf("%d",&b);

    printf("Dati un exponent: ");
    scanf("%d",&e);

    if (b == 0 && e < 0)
    {
        printf("Rezultatul nu este definit.");
        return 0;
    }

    if (e < 0)
    {
        for (int i = 0; i > e; i--)
            rezultat /= b;
    }
    else
    {
        for (int i = 0; i < e; i++)
            rezultat *= b;
    }

    printf("Rezultatul este: %.6f", rezultat);
    */

    //------------------------------------------------------------------------------------------

    /* Problema 13
    int n, SA=0, aux=1, SB=0, SC=0, SD=0;

    printf("Dati un numar n(natural): ");
    scanf("%d", &n);

    // S = 1 + 3 + 5 + ... + n
    for (int i = 1; i <= n; i+=2)
    {
        SA += i;
    }

    printf("Suma = 1 + 3 + 5 + ... + n este: %d\n",SA);

    // Suma = 2 + 4 + 6 + ... + n
    for (int i = 2; i <= n; i+=2)
    {
        SB += i;
    }

    printf("Suma = 2 + 4 + 6 + ... + n este: %d\n",SB);

    //Suma = 1 + 4 + 7 + ... + n
    for (int i = 1; i <= n; i+=3)
    {
        SC += i;
    }

    printf("Suma = 1 + 4 + 7 + ... + n este: %d\n",SC);

    // Suma = 1 + 1*2 + 1*2*3 + ... + 1*2*3*...*n
    for (int i = 1; i <= n; i++)
    {
        SD += aux;
        aux *=(i+1);
    }

    printf("Suma = 1 + 1*2 + 1*2*3 + ... + 1*2*3*...*n este: %d\n",SD);
    */

    //------------------------------------------------------------------------------------------

    /* Problema 14
    int n, aux, sum = 0;

    printf("Dati un nr n: ");
    scanf("%d", &n);

    aux = n;

    for (int i = 0; i < aux; i++)
    {
        printf("Dati un nr intreg(%d): ", i + 1);
        scanf("%d", &n);
        sum += n;
    }

    printf("Suma este: %d", sum);
    */

    //------------------------------------------------------------------------------------------

    /* Problema 15
    int n, aux, sumPar = 0;

    printf("Dati un nr n: ");
    scanf("%d", &n);

    aux = n;

    for (int i = 0; i < aux; i++)
    {
        printf("Dati un nr intreg(%d): ", i + 1);
        scanf("%d", &n);
        if(n%2==0)sumPar += n;

    }

    printf("Suma numerelor pare este: %d", sumPar);
    */

    //------------------------------------------------------------------------------------------

    /* Problema 16
    int n, aux, prodPoz = 1, sumNeg=0;

    printf("Dati un nr n: ");
    scanf("%d", &n);

    aux = n;

    for (int i = 0; i < aux; i++)
    {
        printf("Dati un nr intreg(%d): ", i + 1);
        scanf("%d", &n);
        if(n>0) prodPoz*=n;
        else sumNeg += n;

    }

    printf("Suma numerelor Negative este: %d\n", sumNeg);
    printf("Produsul numerelor Pozitive este: %d\n", prodPoz);
    */

    //------------------------------------------------------------------------------------------

    /* Problema 17
    int n, aux, nrPoz=0;

    printf("Dati un nr n: ");
    scanf("%d", &n);

    aux = n;

    for (int i = 0; i < aux; i++)
    {
        printf("Dati un nr intreg(%d): ", i + 1);
        scanf("%d", &n);
        if(n>0) nrPoz++;

    }

    printf("Nr numerelor Pozitive zitite este: %d\n", nrPoz);
    */

    //------------------------------------------------------------------------------------------

    /* Problema 18
    int n, aux, sumPar = 0, nrPar = 0;
    float mediaA = 0.0;
    printf("Dati un nr n: ");
    scanf("%d", &n);

    aux = n;

    for (int i = 0; i < aux; i++)
    {
        printf("Dati un nr intreg(%d): ", i + 1);
        scanf("%d", &n);
        if (n % 2 == 0)
        {
            sumPar += n;
            nrPar++;
        }
    }


    if (nrPar > 0)
    {
        mediaA = (float)sumPar / nrPar;
        printf("Media Aritmetica a numerelor par este: %.2f\n", mediaA);
    }
    else
    {
        printf("Nu au fost citite numere pare.\n");
    }
    */

    //------------------------------------------------------------------------------------------

    // Problema 19
    float n, max;
    int aux = 0;

    printf("Dati un nr n: ");
    scanf("%d", &aux);

    if (aux <= 0)
    {
        printf("Trebuie sa cititi cel putin un numar.");
        return 0;
    }

    for (int i = 0; i < aux; i++)
    {
        printf("Dati un nr: ");
        scanf("%f", &n);
        if (i == 0)
        {
            max = n;
            continue;
        }
        else if (n > max)
        {
            max = n;
        }
    }

    printf("Valoarea maxima este: %.2f", max);

    return 0;
}