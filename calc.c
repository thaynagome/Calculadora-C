#include <stdio.h>

int main (void){
    float x=0, y=0, resultado=0; //valores utilizados no código
    int op=0; //variavel responsavel em saber tipo do calculo

    do{
        printf("\n\t1 - SOMA \n\t2 SUBTRACAO \n\t3 - MULTIPLICACAO \n\t4 - DIVISAO"); //apresenta para o usuario
        scanf("%i", &op); //o que o usuario deseja fazer
        printf("\nDigite o primeiro numero: ");
        scanf("%f", &x);
        printf("\nDigite o outro numero: ");
        scanf("%f", &y);

        switch(op){
            case 1:
                resultado x+y;
                break;
            case 2:
                resultado x-y;
                break;
            case 3:
                resultado x*y;
                break;
            case 4:
                resultado x/y;
                break;
            default:
                printf("\nDigite uma opcao valida");
                break;
            
        }
    }while();
}