#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main () {

    //cabecalho do jogo
    printf("-------------------\n");
    printf("=Bem vindo ao jogo=\n");
    printf("-------------------\n");

    int segundo = time(0);
    srand(segundo);

    int numerogrande = rand();
    int numerosecreto = numerogrande % 100;
    int chute;
    int tentativas = 0;
    int ganhou = 0;
    double pontos = 1000;


    while (ganhou == 0) {
        // podia usar tbm   for(int i = 1; i <= 100; i++) 
            printf("numero de tentativas %d\n", tentativas);
            printf("qual e o seu chute? ");
            scanf("%d", &chute);
            printf("seu chute foi %d\n", chute);

                if (chute < 0) {
                printf("voce nao pode escolher numeros negativos!!\n");
                continue;
                }



    if (chute == numerosecreto){
        printf("-----------------------------\n");
        printf("voce acertou, jogue novamente\n");
        printf("-----------------------------\n");
        //parar de executar  
        ganhou = 1;
    
    }else {

    if (chute > numerosecreto) {
        printf("seu chute foi maior que o numero secreto \n");
    } else {
        printf("seu chute foi menor que o numero secreto \n");
    }

    }
    tentativas++;

    double pontosperdidos =  (chute - numerosecreto) / (double)2;
    pontos = pontos - pontosperdidos*-1;

}
printf("------------------------------------------\n");
printf("Fim de jogo!\n");
printf("voce acertou em %d tentativas\n", tentativas);
printf("Total de pontos: %.2f\n", pontos);
printf("------------------------------------------");

}

//declara variavel no meio da string %d
//parar de executar(break;)
//double numero com virugla
