#include <stdio.h>

int main()
{
    //-------------------------------------------------------------------------

    /* Problema Suplimentara 1
    int n,x,nrRest3=0;

    do{
        printf("Dati un numar n: ");
        scanf("%d",&n);
    }while(n<=0);

    for(int i=0;i<n;i++){
        printf("Nr[%d]: ",i);
        scanf("%d",&x);
        if(x%5==3) nrRest3++;
    }

    printf("Nr total de nr,impartite la 5, care au restul 3 sunt: %d",nrRest3);
    */

    //-------------------------------------------------------------------------

    /* Problema Suplimentara 2
    int a,b,n,x,nrInterval=0;

    do {
        printf("Dati un numar n: ");
        scanf("%d",&n);
    } while(n<=0);

    printf("Dati un interval [a,b]: ");
    scanf("%d",&a);
    scanf("%d",&b);

    if(a>b) {
        int aux=a;
        a=b;
        b=aux;
    }

    for (int i=0;i<n;i++){
        printf("Nr[%d]: ",i);
        scanf("%d",&x);
        if(x>=a && x<=b) nrInterval++;
    }
    printf("Nr de numere din intervalul [%d,%d] este: %d",a,b,nrInterval);
    */

    //-------------------------------------------------------------------------

    /* Problema Suplimentara 3
    int n,one=0,two=1;
    long long unsigned rez=0;

    do {
        printf("Dati un numar n: ");
        scanf("%d",&n);
    } while(n<0);


    for(int i=1;i<=n;i++){
        printf("%llu ",rez);
        rez= one + two;
        one=two;
        two=rez;

    }
    */

    //-------------------------------------------------------------------------

    /* Problema Suplimentara 4
    int n, x, unu;
    float medieArit = 0.0;

    do {
        printf("Dati un numar n: ");
        scanf("%d", &n);
    } while (n < 0 || n % 2 != 0);

    for (int i = 0; i < n; i++) {
        scanf("%d", &x);

        if (i % 2 == 0) {
            unu = x;
        } else {
            medieArit = (float)(unu + x) / 2;
            printf("%.2f\n\n", medieArit);
        }
    }
    */

    //-------------------------------------------------------------------------

    /* Problema Suplimentara 5
    int x=1,SumImp=0,ProdPar=1,par=1,impar=0;


    while(x!=0){
        scanf("%d",&x);
        if(impar==0){
            SumImp+=x;
            impar++;
        }
        else {
            ProdPar*=x;
            impar=0;
        }
    }

    printf("Suma nr pe pozitii impare: %d",SumImp);
    printf("Produsul nr pe pozitii pare: %d",ProdPar);
    */

    //-------------------------------------------------------------------------



    return 0;



}