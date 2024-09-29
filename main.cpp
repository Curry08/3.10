#include <stdio.h>

int main(){
    int eta;
    float prz;
    printf("Inserisci la tua eta: ");
    scanf("%d",&eta);
    if(eta>26){
        prz=3;
        printf("Il prezzo da paghare è di %.2f euro",prz);
    }
    else if(eta>=18 && eta<=26){
        prz=2;
        printf("Il prezzo da paghare è di %.2f euro",prz);
    }
    else if(eta>=11 && eta<=17){
        prz=1.50;
        printf("Il prezzo da paghare è di %.2f euro",prz);
    }
    else if(eta>=5 && eta<=10){
        prz=1;
        printf("Il prezzo da paghare è di %.2f euro",prz);
    }

    if(eta<5){
        prz=0;
        printf("Il prezzo da paghare è di %.2f euro",prz);
    }
    return 0;
}
