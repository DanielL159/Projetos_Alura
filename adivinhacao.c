#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    printf("\n\n");
    printf("          P  /_\\  P                              \n");
    printf("         /_\\_|_|_/_\\                            \n");
    printf("     n_n | ||. .|| | n_n          Bem vindo ao    \n");
    printf("     |_|_|nnnn nnnn|_|_|      Jogo de Adivinhação!\n");
    printf("    |" "  |  |_|  |"  " |                         \n");
    printf("    |_____| ' _ ' |_____|                         \n");
    printf("          \\__|_|__/                              \n");
    printf("\n\n");

//criador de numero secreto do jogo
    int tempo = time(0);//segundos deisde 1970
    srand(tempo);//forneçe semente ou dado base para a funçao rand()
    int numeroGrande = rand();
    int numerosecreto = numeroGrande % 100;// calcula o resto do numero randomico fazendo com que ele sempre tenha apenas duas casas decimais 0 a 99

// contador de pontuaçao e chute 
    int chute;
    int tentativa = 1;
    double pontos = 1000;
    
    int numerodetentativas;
    int nivel;

    printf("Qual nivel deseja jogar?\n");
    printf("(1)Facil (2)Medio (3)Dificil\n");
    printf("Escolha: ");
    scanf("%d",&nivel);

    switch (nivel)
    {
        case 1:
            numerodetentativas=20;
            break;
        case 2:
            numerodetentativas=15;
            break;
        default:
            numerodetentativas=5;
            break;
    }
    /*switch usado acima e a mesma coisa de escrever o if a baixo 
    if (nivel==1){
        numerodetentativas=20;
    }else if(numerodetentativas==2){
        numerodetentativas=15;
    }else{
        numerodetentativas=20;
    }*/
    
    int acertou = chute == numerosecreto;

    for(int i = 1;i<=numerodetentativas;i++)
    {
        printf("Tentativa %d\n",tentativa);
        printf("Qual e o seu chute? ");
        scanf("%d",&chute);
        printf("Seu chute foi %d\n",chute);
        int erroNegativo = chute < 0;
        if (erroNegativo)
        {
            printf("Vc nao pode chutar numero negativo\n");
            continue;
        }
        
        int acertou = chute == numerosecreto;
        int maior = chute > numerosecreto;

        if (acertou){
            break;
        }else if(maior)
            {
                printf("Seu chute foi maior que o numero secreto\n");
                
        }else{
                printf("Seu chute foi menor que o numero secreto\n");
                
             }
            printf("Mas nao desanime. tente de novo!\n");
            tentativa++;

            double pontosPerdidos = abs(chute + numerosecreto)/(double)2;
            pontos = pontos - pontosPerdidos;
    }

    printf("Fim de Jogo\n");

if (acertou)
 {
    printf("Parabens! Voce acertou\n");
    printf("Voce acertou em %d tentativas.\n",tentativa);
     printf("Total de pontos %.1f\n" , pontos);
}else{
printf("Vc perdeu Tente novamente!! ");
}
    return 0;
}