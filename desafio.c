#include <stdio.h>
#include <stdlib.h>
#include <time.h>
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

   /*Escreva um programa que peça um inteiro ao usuário, e 
   com esse inteiro, ele imprima, linha-a-linha, a tabuada daquele número
    até o 10. Por exemplo, se ele escolher o número 2, o programa imprimirá:*/
/*
    int main (){
        int usuario = 0;
        
        int tabuadaResultado[10];

        printf("Por favor me forneca o numero da tabuada :");
        scanf("%d",&usuario);

        for(int i = 0; i<=10 ; i++){
            tabuadaResultado[i]= usuario * i;
            printf("%d x %d = %d\n",usuario,i,tabuadaResultado[i]);
        }

    }*/