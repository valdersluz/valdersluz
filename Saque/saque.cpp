#include <stdio.h>

int main(){

    int saque, cem, qtcem, cinquenta, qtcin, vinte, qtvin, dez, qtdez, cinco, qtcinco, dois, qtdois, um, qtum;

    printf("saque de: ");
    scanf("%d", &saque);

    qtcem = saque / 100;
    cem = saque % 100;

    qtcin = cem / 50;
    cinquenta = cem % 50;

    qtvin = cinquenta / 20;
    vinte = cinquenta % 20;

    qtdez = vinte / 10;
    dez = vinte % 10;

    qtcinco = dez / 5;
    cinco = dez % 5;

    qtdois = cinco / 2;
    dois = cinco % 2;

    qtum = dois / 2;
    um = dois % 1;

    printf("\n");
    printf("Seu saque terá %d de cem. %d de cinquenta. %d de vinte. %d de dez. %d de cinco. %d de dois. %d de um.", qtcem, qtcin, qtvin, qtdez, qtcinco, qtdois, qtum);
    //printf("%d %f", cem, qtcin);

    return 0;
}
