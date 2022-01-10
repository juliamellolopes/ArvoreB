#include "funcoes.h"
 

void inicializa(Pagina **btree, Record r){
    char aux[100];
	char aux1[100];
    for(int i = 1; i < 1001; i+=100){
		r.key = i;
		r.arq = (char *)malloc(40*sizeof(char));
		strcpy(aux,"Arquivos/Arquivo");
		r.limit = i+99;
		sprintf(aux1,"%d",r.key);
		strcat(aux, aux1);
		strcat(aux, "-");
		sprintf(aux1,"%d",r.limit);
		strcat(aux, aux1);
		strcpy(r.arq, aux);
		strcat(r.arq, ".txt");
		Insere(btree, r);
	}
}

void inseri(Pagina **btree, Record r, int cpf){
	FILE *file;
    int c;
    char linha[1000];
    const char s[] = ",";
    char *token;
    char *result;

    r.key = cpf;
	Pesquisa(*btree,&r);

    if ((file = fopen(r.arq, "r")) == NULL){
        printf("\nErro ao abrir o arquivo!");
        exit(0);
    }

    while (!feof(file)){
        result = fgets(linha, 1000, file);

        if (result){
            token = strtok(linha, s);
            int i = 0;
            while( token != NULL ){
                if(i == 2){
                    c = atoi(token);
                    if(cpf == c){
                        r.key = cpf;
                        Insere(btree, r);
                        printf("\nInsersao realizada com sucesso!\n");
                    }
                }
                token = strtok(NULL, s);
                i++;
            }
        }   
    }   
    fclose(file);    
}
                                                                                                                             
void imprimir(Pagina **btree, Record r,int cpf){
	FILE *file;
    int c;
    char linha[1000], idade[10],nome[15];
    const char s[] = ",";
    char *token;
    char *result;

    r.key = cpf;
	Pesquisa(*btree,&r);

    if ((file = fopen(r.arq, "r")) == NULL){
        printf("\nErro ao abrir o arquivo!");
        exit(0);
    }

    while (!feof(file)){
        result = fgets(linha, 1000, file);

        if (result){
            token = strtok(linha, s);
            int i = 0;
            while( token != NULL ){
                switch (i){
                    case 0:
                        strcpy(nome, token);
                        break;
                    
                    case 1:
                        strcpy(idade, token);
                        break;
                    case 2:
                        if(i == 2){
                            c = atoi(token);
                            if(cpf == c) printf("Nome: %s\nIdade: %sanos\nCpf:%d\n", nome, idade,cpf);  
                        }
                        break;	
                }
                token = strtok(NULL, s);
                i++;
            }
        }   
    }   
    fclose(file);
}
