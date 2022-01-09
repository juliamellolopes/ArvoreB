#include "funcoes.h"

void menu();
void client();

int main(){
	int opc = 0, cpf = 0;
	Record r;
  	Pagina *btree = CreateBTree();
	inicializa(&btree, r);

	do{
		menu();
		scanf("%d",&opc);

		switch (opc)
		{
		case 1:
			client();
			scanf("%d",&cpf);
			inseri(&btree, r, cpf);
			break;
		case 2:
			client();
			scanf("%d",&cpf);
			Retira(&btree, cpf);
			break;
		case 3:
			client();
			scanf("%d",&cpf);
			imprimir(&btree, r,cpf);
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

void client(){
	printf("Informe o cpf do cliente:");
}

void menu(){
    printf("1)Inserir\n");
    printf("2)Remover\n");
    printf("3)Imprimir\n");
    printf("4)Sair\n");
}