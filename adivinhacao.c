#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    //imprime cabeçalho do jogo 
    printf ("*******************************\n");
    printf("Bem vindo ao Jogo de Adivinhacao\n");
    printf("********************************\n");

//criador de numero secreto do jogo
    int tempo = time(0);//segundos deisde 1970
    srand(tempo);//forneçe semente ou dado base para a funçao rand()
    int numeroGrande = rand();
    int numerosecreto = numeroGrande % 100;// calcula o resto do numero randomico fazendo com que ele sempre tenha apenas duas casas decimais 0 a 99

// contador de pontuaçao e chute 
    int chute;
    int tentativa = 1;
    double pontos = 1000;
    

    while (1)
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
            printf("Parabens! Voce acertou\n");
            printf("Jogue de novo! Voce e um bom jogador.\n");

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
    printf("Voce acertou em %d tentativas.\n",tentativa);
    printf("Total de pontos %.1f\n" , pontos);
    return 0;
}