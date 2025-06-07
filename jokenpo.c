#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main (){

int jogador , computador;

srand (time(0));

printf("***Escolha uma opção***\n");
printf("Pedra      1\n");
printf("Papel     2\n");
printf("tesoura   3\n");
scanf("%d", &jogador);


computador = rand() % 3+1;


switch (jogador)
{
   case 1:
       {
         if (computador ==1)
         printf("O jogador Escolheu Pedra || O computador escolheu pedra\n JOGO EMPATADO!!\n");
            else if (computador==2)
             {
                 printf("O jogador Escolheu Pedra || O computador escolheu Papel\n COMPUTADOR VENCEU!!\n");

                } else{
                     printf("O jogador Escolheu Pedra || O computador escolheu Tesoura\n JOGADOR VENCEU!!\n");
                }
             }
    break;

    case 2:
         {
         if (computador ==1)
         printf("O jogador Escolheu Papel || O computador escolheu pedra\n JOGADOR VENCEU!!\n");
            else if (computador==2)
             {
                 printf("O jogador Escolheu Papel || O computador escolheu Papel\n JOGO EMPATADO!!\n");

                } else{
                     printf("O jogador Escolheu Papel || O computador escolheu Tesoura\n COMPUTADOR VENCEU!!\n");
                }
             }
    break;

     case 3:
         {
         if (computador ==1)
         printf("O jogador Escolheu Tesoura || O computador escolheu pedra\n COMPUTADOR VENCEU!!\n");
            else if (computador==2)
             {
                 printf("O jogador Escolheu Tesoura || O computador escolheu Papel\n JOGADOR VENCEU!!\n");

                } else{
                     printf("O jogador Escolheu Tesoura || O computador escolheu Tesoura\n JOGO EMPATADO!!\n");
                }
             }
    break;

    default:
        printf("Opção invalida");
        
}




    return 0;
}
