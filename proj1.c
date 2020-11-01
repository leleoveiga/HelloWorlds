#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <string.h>

void imprimir_tabuleiro(char tab[3][3]);

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int i, j, k;
	char tabuleiro[3][3], aux, jog_da_vez[30], jogador1[30], jogador2[30];

	printf("\n Bem-vindo ao Jogo da Velha!\n ");
	system("pause");
	system("cls");
	
	printf(" Digite o nome do jogador(X): ");
	gets(jogador1);
	printf(" \n Digite o nome do jogador(O): ");
	fflush(stdin);
	gets(jogador2);
	
	system ("cls");
	printf("\n Você deve informar a posição que deseja no formato [Linha Coluna]\n");

	for(i = 3; i <= 11; i++)
	{
		if(i % 2 == 1)
		{
			aux = 'X';
			strcpy(jog_da_vez, jogador1);
		}
		else
		{
			aux = 'O';
			strcpy(jog_da_vez, jogador2);	
		}

		printf("\n\n\n Essa é a vez de %s!\n Em qual posição deseja colocar o %c?  ", jog_da_vez, aux);
		scanf("%d %d", &j, &k);

		tabuleiro[j][k] = aux;
		
		imprimir_tabuleiro(tabuleiro);
	}
	 
	printf("\n\n\n");
	


		printf("\n\n\n");
		
	return 0;
}

void imprimir_tabuleiro(char tab[][3])
{
	int j, k;
	for(j = 0; j < 3; j++)
	{
		for(k = 0; k < 3; k++)
		{
			if(tab[j][k] != 'X' && tab[j][k] != 'O')
				printf("\t \t");
			else
				printf("\t%c\t", tab[j][k]);
			
			if(k < 2)
				printf("|");
		}
		
		if(j < 2)
			printf("\n__________________________________________________\n\n");
	}	
}
