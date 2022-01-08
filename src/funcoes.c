#include "funcoes.h"

void menu(){
    printf("1)Inserir\n");
    printf("2)Remover\n");
    printf("3)Imprimir\n");
    printf("4)Sair\n");
}

void inicializa(){
    Record r;
  	Pagina *btree = CreateBTree();
    int reg[] = {1,1000};

  	for(int i=0; i<2; i++){
    	r.key = reg[i];
    	Insere(&btree, r);
  	}
    // Imprime(&btree, 0);
}

 void inseri(){
	// FILE *file;
    // int c;
    // char cpf[1000],nome[24], idade[10];

    // if ((file = fopen("Arquivos/Arquivo1.txt", "r")) == NULL){
	// 	printf("\nErro ao abrir o arquivo!");
	// 	exit(1);
	// }

	// while (!feof(file)){
	// 	for(int i=0; i<1; i++){
    //         fscanf(file, "%s[^,]%s[^,]%s", nome, idade, cpf);
    //         c = atoi(fgets(cpf,1000, file));
    //         r.key = c;
    //         Insere(&btree, r);
  	//     } 
	// }
    // fclose(file);
    
}

// void remove(){
// }
                                                                                                                            
// void imprimir(){

    
//    Imprime(&btree, 0);
// }
