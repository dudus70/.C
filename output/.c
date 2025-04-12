#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

printf("Bem vindo ao jogo de adivinhacao!\n");


int segundos = time(0);
srand(segundos);

int numerogrande = rand();

int numerosecreto = numerogrande % 100;
int chute;
int tentativas = 1;
double pontos = 1000;

int acertou = 0;

int nivel;
printf("Qual o nivel de dificuldade? \n");
printf("(1) Facil (2) Medio (3) Dificil \n\n");
printf("Escolha: ");
scanf("%d", &nivel);

int numerodetentativas; 

switch (nivel){
    case 1:
        numerodetentativas = 20;
        break;
    case 2:
        numerodetentativas = 12;
        break;
    default: 
        numerodetentativas = 6;
        break;
}

for(int i = 1; i <=numerodetentativas; i++) {

    printf("tentativas %d\n", tentativas);
    printf("Qual e o seu chute? ");

    scanf("%d", &chute);
    printf("Seu chute foi %d\n", chute);

    if (chute < 0) {
        printf("Voce nao pode chutar numero negativos! \n");
        continue;
    }

    acertou = (chute==numerosecreto);
    int maior = chute > numerosecreto;

    if(acertou) {
        break;
    }
    else if(maior){
        printf("Seu chute foi maior que o numero secreto! \n");
    }
    else {
        printf("Seu chute foi menor que o numero secreto! \n");
    }

    tentativas++;

    double pontoperdidos = abs(tentativas*35);
    pontos = pontos - pontoperdidos;

}

printf("Fim de jogo! \n");


if(acertou) {
    printf("Voce ganhou!! \n");
    printf("Voce acertou em %d tentativas! \n", tentativas);
    printf("Total de pontos: %.1f\n", pontos);  
}
else {
    printf("Voce perdeu! Tente de novo! \n");

}

}
