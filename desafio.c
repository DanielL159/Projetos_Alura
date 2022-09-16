#include <stdio.h>
#include <stdlib.h>

/*
int main (){

    int x ;
    int y;
    
printf("Por favor escreva a variavel X:");
scanf("%d",&x);
printf("Por favor escreva Y:");
scanf("%d",&y);

int resultado = x*y;
printf ("%d x %d = %d",x , y,resultado);

}*/

/*int main() {
    int secretNumber = 50;
    int chute ;
    int try = 1;
    int acertou ;
    int maior ;

    printf("Bem vindo ao jogo\n");
    while (1)
        {
            printf("Esta e a tentativa de numero %d\n",try);
            printf("Qual seu chute :\n");
            scanf("%d",&chute);
            
             acertou = chute == secretNumber;
             maior = chute > secretNumber;

            if (chute < 0 )
            {
               printf("Voce nao pode chutar numeros negativos\n");
               continue;
            }
            
            if (acertou)
            {
                printf("Meus parabens, voce acertou em %d tentativas ",try);
                break;
            }else if (maior)
            {
               printf("Seu chute foi maior que o numero secreto\n");
            }else{
                printf("Seu chute foi menor que o numero secreto\n");
            }
            try++;  
        }

}
    */