#include <stdio.h>

int main (void){
    float x,y; //valores utilizados no código
    int op; //variavel responsavel em saber tipo do calculo

    do{
        printf("\n\t1 - SOMA \n\t2 SUBTRACAO \n\t3 - MULTIPLICACAO \n\t4 - DIVISAO"); //apresenta para o usuario
        scanf("%i", &op); //o que o usuario deseja fazer
        printf("\nDigite o primeiro numero: ");
        scanf("%f", &x);
        printf("\nDigite o outro numero: ");
        scanf("%f", &y);
    }while();
}