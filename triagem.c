#include <stdio.h>
#include <windows.h>

void main(){
	SetConsoleOutputCP(CP_UTF8);
	char pedido, tipo;
	int senha = 0;
	
	do{
		printf("\nPossui pedido de exame? (s ou n): ");
		scanf(" %c", &pedido);
		if (pedido == 's'){
			senha++;
			printf("Sua senha é %d\n", senha);
			printf("Qual o tipo de exame?\n");
			printf("a = admissional\n");
			printf("d = demissional\n");
			printf("p = periódico\n");
			printf("o = outro\n");
			scanf(" %c", &tipo);
			if(tipo == 'a') printf("Encaminhe para a sala 1\n");
			else if(tipo == 'd') printf("Encaminhe para a sala 2\n");
			else if(tipo == 'p') printf("Encaminhe para a sala 3\n");
			else printf("Encaminhe para a sala 4\n");
		}
	}while(pedido == 's');
	printf("Volte para a sua empresa e solicite um exame se for necessário\n");
	
	getch();
}