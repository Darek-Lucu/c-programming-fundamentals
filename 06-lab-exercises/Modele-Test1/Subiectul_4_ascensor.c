#include <stdio.h>

int main()
{
    // Subiectul 4 - Ascensor

    int a, b, i, durata;

    do{
        printf("Esti la etajul (a)?: ");
        scanf("%d",&a);

        printf("Vrei sa ajungi la etajul (b)?: ");
        scanf("%d",&b);

        if(a < -1 || a > 50 || b < -1 || b > 50)
            printf("Datele introduse nu sunt valide, mai incearca!\n");

    }while(a < -1 || a > 50 || b < -1 || b > 50);

    if(a < b){
        printf("\nLiftul urca de la etajul %d la etajul %d.\n",a,b);

        for(i=a;i<=b;i++){
            if(i==b)
                printf("%d STOP\n",i);
            else
                printf("%d -> ",i);
        }

        durata = (b-a)*5;
        printf("Urcarea a durat %d secunde.\n",durata);
    }
    else if(a > b){
        printf("\nLiftul coboara de la etajul %d la etajul %d.\n",a,b);

        for(i=a;i>=b;i--){
            if(i==b)
                printf("%d STOP\n",i);
            else
                printf("%d -> ",i);
        }

        durata = (a-b)*5;
        printf("Coborarea a durat %d secunde.\n",durata);
    }
    else{
        printf("\nLiftul se afla deja la etajul %d.\n",a);
        printf("%d STOP\n",a);
        printf("Durata deplasarii este: 0 secunde.\n");
    }

    printf("\nNume si prenume       Grupa       Data\n");
    printf("Lucuelscu Darius     AIA-Dual     3.11.2026\n");

    return 0;
}
