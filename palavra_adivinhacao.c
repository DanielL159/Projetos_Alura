#include <stdio.h>
#include <string.h>

char palavrasecreta[20];
char chutes[26];
int tentativas =0;

void abertura(){
    printf("********************\n");
    printf("*  Jogo de forca   *\n");
    printf("********************\n\n");
}


void chuta(){
 char chute ;
            scanf(" %c",&chute);

            chutes[tentativas]=chute;
        tentativas++;
}

int jachutou (char letra ){
    int achou =0;

    for (int j = 0; j < tentativas; j++)//verifica se as letras dentro da varivavel chute e igual a letra da palavr secreta
        {
        if (chutes[j]== letra)
        {
            achou=1;
            break;
        }
    }
    return achou;
}

void desenhaForca(){
    for (int i =0 ; i < strlen(palavrasecreta);i++)//corre a palavra secreta
            {

                
                int achou = jachutou(palavrasecreta[i]);
                    
                
                if (achou)
                {
                    printf("%c ",palavrasecreta[i]);
                }else
                {
                printf("_ ");

                }
            }
            printf("\n");
}

void escolhePalavra(){

    sprintf(palavrasecreta,"MELANCIA");
}



int main (){
  

    int acertou = 0;
    int enforcou = 0;

    escolhePalavra();
  abertura();

        do
        {
            desenhaForca();

          chuta();
        

        } while (!acertou  && !enforcou );
    

}
   
