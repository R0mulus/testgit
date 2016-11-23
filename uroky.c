#include <stdio.h>
#include <math.h>

void vypocetSplatky(float,float,int,float *);

int main(){

    float suma,urok;
    int dlzka;
    float splatka;

    printf("Suma: ");
    scanf("%f",&suma);

    printf("Urok v percentach: ");
    scanf("%f",&urok);

    printf("Dlzka v mesiacoch: ");
    scanf("%d",&dlzka);

    vypocetSplatky(suma, urok, dlzka, &splatka);

    printf("Splatka: %.2f",splatka);

    return 0;
}

void vypocetSplatky(float suma,float urok,int dlzka,float *p){
    int rok;

    rok = (dlzka + 11) / 12;
    //printf("%d",rok);

    urok /= 100;

    *p = ((suma / 100) * (100 + pow(urok,rok))) / dlzka;
}
