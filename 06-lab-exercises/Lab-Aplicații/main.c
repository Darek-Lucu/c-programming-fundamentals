#include <stdio.h>

int main()
{
    //------------------------------------------------------------------------------------------

    /* Problema 1

    int i, j;

    for(i=1;i<=10;i++){
        for(j=1;j<=10;j++){
            printf("%4d",i*j);
        }
        printf("\n");
    }

    */

    //------------------------------------------------------------------------------------------

    /* Problema 2

    int n, aux, cifra, invers = 0;

    do{
        printf("Dati un numar n(natural): ");
        scanf("%d",&n);
    }while(n<0);

    aux = n;

    while(aux>0){
        cifra = aux%10;
        invers = invers*10+cifra;
        aux /= 10;
    }

    if(n==invers)
        printf("Numarul %d este palindrom.",n);
    else
        printf("Numarul %d nu este palindrom.",n);

    */

    //------------------------------------------------------------------------------------------

    /* Problema 3

    int n, aux, cifra, invers = 0, rezultat = 0;

    do{
        printf("Dati un numar n(natural): ");
        scanf("%d",&n);
    }while(n<0);

    aux = n;

    while(aux>0){
        cifra = aux%10;
        invers = invers*10+cifra;
        aux /= 10;
    }

    while(invers>0){
        cifra = invers%10;

        if(cifra%2!=0){
            rezultat = rezultat*10+cifra;
        }

        invers /= 10;
    }

    printf("Numarul obtinut prin eliminarea cifrelor pare este: %d",rezultat);

    */

    //------------------------------------------------------------------------------------------

    /* Problema 4

    int n, aux, cifra, nr = 0;

    do{
        printf("Dati un numar n(natural): ");
        scanf("%d",&n);
    }while(n<0);

    aux = n;

    while(aux>0){
        cifra = aux%2;

        if(cifra==1)
            nr++;

        aux /= 2;
    }

    printf("Numarul de cifre 1 in baza 2 este: %d",nr);

    */

    //------------------------------------------------------------------------------------------

    /* Problema 5

    int n, x, sum = 0, nr = 0;
    float mediaArit = 0.0;

    do{
        printf("Dati un numar n: ");
        scanf("%d",&n);
    }while(n<=0);

    for(int i=0;i<n;i++){
        printf("Dati un numar intreg(%d): ",i+1);
        scanf("%d",&x);

        if(x%10==7 || x%10==-7){
            sum += x;
            nr++;
        }
    }

    if(nr>0){
        mediaArit = (float)sum/nr;
        printf("Media aritmetica este: %.2f",mediaArit);
    }
    else{
        printf("Nu exista numere care au ultima cifra 7.");
    }

    */

    //------------------------------------------------------------------------------------------

    /* Problema 6

    int n, x, nrPrime = 0, prim;

    do{
        printf("Dati un numar n: ");
        scanf("%d",&n);
    }while(n<=0);

    for(int i=0;i<n;i++){
        printf("Dati un numar intreg(%d): ",i+1);
        scanf("%d",&x);

        prim = 1;

        if(x<2)
            prim = 0;
        else{
            for(int j=2;j<x;j++){
                if(x%j==0){
                    prim = 0;
                    break;
                }
            }
        }

        if(prim==1)
            nrPrime++;
    }

    printf("Numarul numerelor prime este: %d",nrPrime);

    */

    //------------------------------------------------------------------------------------------

    /* Problema 7

    int a, b, sumaA = 0, sumaB = 0;

    do{
        printf("Dati doua numere naturale a si b: ");
        scanf("%d",&a);
        scanf("%d",&b);
    }while(a<=0 || b<=0);

    for(int i=1;i<a;i++){
        if(a%i==0)
            sumaA += i;
    }

    for(int i=1;i<b;i++){
        if(b%i==0)
            sumaB += i;
    }

    if(sumaA==b && sumaB==a)
        printf("Numerele %d si %d sunt prietene.",a,b);
    else
        printf("Numerele %d si %d nu sunt prietene.",a,b);

    */

    //------------------------------------------------------------------------------------------

    return 0;
}
