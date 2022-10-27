#include <stdio.h>
#include <string.h>

void abertura(){
    printf("********************\n");
    printf("*  Jogo de forca   *\n");
    printf("********************\n\n");
}


void chuta(char chutes[26],int* tentativas){
 char chute ;
            scanf(" %c",&chute);

            chutes[*tentativas]=chute;
        (*tentativas)++;
}

int jachutou (char letra ,char chutes[26],int tentativas){
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



int main (){
    char palavrasecreta[20];

    sprintf(palavrasecreta,"MELANCIA");

    int acertou = 0;
    int enforcou = 0;

    char chutes[26];
    int tentativas =0;

  abertura();

        do
        {
            for (int i =0 ; i < strlen(palavrasecreta);i++)//corre a palavra secreta
            {

                //codigo
                int achou = jachutou(palavrasecreta[i],chutes,tentativas);
                    
                
                if (achou)
                {
                    printf("%c ",palavrasecreta[i]);
                }else
                {
                printf("_ ");

                }
            }
            printf("\n");

          chuta(chutes,&tentativas);
        

        } while (!acertou  && !enforcou );
    

}
   
