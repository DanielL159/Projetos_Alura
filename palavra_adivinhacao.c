#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include<time.h>
#include "forca.h"


char palavrasecreta[tamanho_palavra];
char chutes[26];
int chutesDados =0;

void abertura(){
    printf("********************\n");
    printf("*  Jogo de forca   *\n");
    printf("********************\n\n");
}


void chuta(){
 char chute ;
            scanf(" %c",&chute);

            chutes [chutesDados]=chute;
     chutesDados++;
}

int jachutou (char letra ){
    int achou =0;

    for (int j = 0; j < chutesDados; j++)//verifica se as letras dentro da varivavel chute e igual a letra da palavr secreta
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

    printf("  _______      \n");
    printf(" |/      |     \n");
    printf(" |      (_)    \n");
    printf(" |      \\|/   \n");
    printf(" |       |     \n");
    printf(" |      / \\   \n");
    printf(" |             \n");
    printf("_|___          \n");
    printf("\n\n");

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
void adicionaPalavra(){
    char quer ;
    printf("DESEJA ADICIONAR UMA NOVA PALAVRA NO JOGO ? (S/N)");
    scanf(" %c",&quer);

    if (quer == 'S'){

        char novapalavra[tamanho_palavra];
        printf("Qual a nova palavra ?");
        scanf(" %s",&novapalavra);

        FILE*f;
        
        f= fopen("forca_palavras.txt","r+");

        if (f==0){

        printf("Perdao Banco de Dados nao Disponivel");
        exit(1);
        }

        int qtd ;
        fscanf(f,"%d",&qtd);
        qtd++;

        fseek(f,0,SEEK_SET);
        fprintf(f,"%d",qtd);


        fseek(f,0,SEEK_END);
        fprintf(f, "\n%s",novapalavra);

        fclose(f);
    }
}

void escolhePalavra(){
    FILE* f;

    f= fopen("forca_palavras.txt","r");
    if (f==0){
        printf("Perdao Banco de Dados nao Disponivel");
        exit(1);
    }

    int quantidadePalavras;
    fscanf(f,"%d",quantidadePalavras);

    srand(time(0));
    int randomico = rand() % quantidadePalavras;

    for (int i = 0; i < randomico; i++)
    {
       fscanf(f,"%s",palavrasecreta);
    }
    
    fclose(f);
}

int ganhou (){

    for (int i = 0; i < strlen(palavrasecreta); i++)
    {
        if (!jachutou(palavrasecreta[i]))
        {
            return 0;
        }
        
    }
    return 1;
}

int enforcou(){
    int erros = 0;
   

    for (int i =0;i < chutesDados;i++){
         int existe = 0 ,j;
            for (  j = 0; j < strlen(palavrasecreta); j++)
            {
                if(chutes[i]== palavrasecreta[j]){
                    existe = 1;
                    break;
                }
            }

         if (!existe)erros++; 

    }

    return erros >=5;
    
}



int main (){
  
    escolhePalavra();
  abertura();


        do
        {
            desenhaForca();

            chuta();
        
       
        } while (!ganhou()  && !enforcou() );

    if (ganhou()){
        printf("Parabens vc acertou");
    }else {
        printf("Infelismente vc errou");
    }
   

}
   
