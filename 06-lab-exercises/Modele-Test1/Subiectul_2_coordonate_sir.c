#include <stdio.h>

int main()
{
    // Subiectul 2

    int x, y;
    int cadranI = 0, cadranII = 0, cadranIII = 0, cadranIV = 0;
    int axe = 0, total = 0;
    float procentI, procentII, procentIII, procentIV, procentAxe;
    int k, termen;

    //------------------------------------------------------------------------------------------

    // Problema a)

    do{
        printf("Introduceti cele 2 coord. a punctului: ");
        scanf("%d",&x);
        scanf("%d",&y);

        if(x==0 && y==0)
            break;

        total++;

        if(x>0 && y>0)
            cadranI++;
        else if(x<0 && y>0)
            cadranII++;
        else if(x<0 && y<0)
            cadranIII++;
        else if(x>0 && y<0)
            cadranIV++;
        else
            axe++;

    }while(1);

    if(total>0){
        procentI = (float)cadranI/total*100;
        procentII = (float)cadranII/total*100;
        procentIII = (float)cadranIII/total*100;
        procentIV = (float)cadranIV/total*100;
        procentAxe = (float)axe/total*100;
    }
    else{
        procentI = 0;
        procentII = 0;
        procentIII = 0;
        procentIV = 0;
        procentAxe = 0;
    }

    printf("\nSunt %d puncte in cadranul I.(%.1f%%)\n",cadranI,procentI);
    printf("Sunt %d puncte in cadranul II.(%.1f%%)\n",cadranII,procentII);
    printf("Sunt %d puncte in cadranul III.(%.1f%%)\n",cadranIII,procentIII);
    printf("Sunt %d puncte in cadranul IV.(%.1f%%)\n",cadranIV,procentIV);
    printf("Sunt %d puncte situate pe axa OX/OY.(%.1f%%)\n",axe,procentAxe);

    //------------------------------------------------------------------------------------------

    // Problema b)

    do{
        printf("\nDati o valoare pentru k (k>=2): ");
        scanf("%d",&k);
    }while(k<2);

    printf("Sirul numeric: ");

    for(int i=1;i<=k;i++){
        if(i%2!=0)
            termen = (i+1)/2;
        else
            termen = i/2+2;

        if(i==k)
            printf("%d.\n",termen);
        else
            printf("%d, ",termen);
    }

    //------------------------------------------------------------------------------------------

    // Problema c)

    printf("\nNume si prenume       Grupa       Data\n");
    printf("Lucuelscu Darius     AIA-Dual     3.11.2026\n");

    return 0;
}
