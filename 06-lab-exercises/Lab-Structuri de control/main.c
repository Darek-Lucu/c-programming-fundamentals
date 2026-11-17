#include <stdio.h>
#include <stdlib.h>

int main(void)
{
//---------------------------------------------------------------------------------------
    /* //Problema 2

    float a,b,c;
    printf("a = ");
    scanf("%f",&a);

    printf("b = ");
    scanf("%f",&b);

    printf("c = ");
    scanf("%f",&c);



    if(a>b && a>c){
        printf("Maximul dintre %.2f, %.2f, %.2f este %.2f", a,b,c,a);
    }else if(b>a && b>c){
        printf("Maximul dintre %.2f, %.2f, %.2f este %.2f", a,b,c,b);
    }else{
        printf("Maximul dintre %.2f, %.2f, %.2f este %.2f", a,b,c,c);
    }

    */


//---------------------------------------------------------------------------------------

    /*Problema 3

    char A;

    //scanf()
    printf("Dati o litera, fie mare sau mica: ",&A);
    scanf("%c",&A);

    //getchar()
    printf("Dati o litera, fie mare sau mica: ",&A);
    A = getchar();

    if(A>='A' && A<='Z' || A>='a' && A<='z'){
        printf("Valoarea data %c este o litera mare sau mica!",A);
    }else {
        printf("Valoarea data %c nu este o litera mare sau mica!",A);
    }

    */

//---------------------------------------------------------------------------------------

    /* Problema 4

    int n,produs=1;

    do {
        printf("Dati un n(numar natural): ");
        scanf("%d",&n);
    } while(n<1);

    for(int i=1;i<=n;i++){
        produs=produs*i;
    }

    printf("Produsul primelor %d numere naturale este: %d",n,produs);

    */

//---------------------------------------------------------------------------------------

    /* Problema 5

    int n,SumaCifre=0;

    do {
        printf("Dati un n(numar natural): ");
        scanf("%d",&n);
    } while(n<1);

    if(n<10) {printf("Suma cifrelor a nr %d este: %d",n,n); return 0;}
    while(n>0){
        SumaCifre = SumaCifre + n%10;
        n/=10;
    }

    printf("Suma cifrelor a nr %d este: %d",SumaCifre,SumaCifre);

    */

//---------------------------------------------------------------------------------------

    /* Problema 7

    int a,b,x;

    printf("Dati valorile unui interval a si b: ");
    scanf("%d %d",&a,&b);

    printf("Dati o valoare x: ");
    scanf("%d",&x);

    if(a>b){ //interschimba a si b, pt ca sa arate sub forma de [a,b]
        int aux=a;
        a=b;
        b=aux;
    }

    if(x>=a && x<=b){
        printf("Numarul %d este in intervalul [%d,%d]!",x,a,b);
    }else {
        printf("Numarul %d nu este in intervalul [%d,%d]!",x,a,b);
    }

    */

//---------------------------------------------------------------------------------------

    //Problema 8

    int sum=0,n;

    printf("Scrieti un sir de numere(incheiat cu 0!): \n");
    do{
        scanf("%d",&n);
        sum+=n;
    }while(n!=0);

    printf("Suma este: %d",sum);



    return 0;
}