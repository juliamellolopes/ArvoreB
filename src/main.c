#include "funcoes.h"

int main(){
	int opc;

	do{
		menu();
		scanf("%d",&opc);

		switch (opc)
		{
		case 1:
			// insere
			break;
		case 2:
			// remove
			break;
		case 3:
			// imprimi
			break;	
		case 4:
			printf("Saindo do programa!!\n");
			break;
		default:
			break;
		}
	}while (opc != 4);

	return 0;
}