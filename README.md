<h1 align="center">Trabalho: Arvore B</h1>
Este projeto se baseia em utilizar a arvore tipo B para acessar dados de clientes em diversos arquivos. Os arquivos com os dados dos clientes então na pasta Arquivos, onde entã ordenados pelo cpf por ordem crescente, a estrutura encontrada é: nome, idade, cpf. O codigo se encontra na pasta src.

### Copilação

Programação feita em C, na plataforma Visual Studio Code, no Windows 10. Abra o arquivo Mikefile.cpp e copile:
	
    make clean
    make
    make run

### Explicação do Código

Ao inicializar o programa a arvore vai ser preenchida com os valores iniciais de cada arquivo, como: 1, 101, 201,...,etc., em cada uma dessas posições tambem ficam quardadas os arquivos e seus limites de acesso, facilitando assim a pesquisa dos dados. O menu sera apresentado ao usuário como mostra a imagem a seguir: 

![image](https://user-images.githubusercontent.com/84408875/148704575-5888fc8a-8764-4fb2-ac0b-d34fb85132fb.png)

O usuário podera escolher entre as opções mostradas, podendo inserir um cpf a arvore, remvover um cpd, e imprimir os dados de um cliente a partir do cpf. Ao excolher uma das opções a tela tera as seguintes informações:

![image](https://user-images.githubusercontent.com/84408875/148704820-21059978-c9e6-4ccc-8610-184967f9ba87.png)

Nesse caso, o usuário escolheu a alternativa 3 e inseriru o cpf 30, em seguida o programa fez a pesquisa dos dados da pessoa nos arquivos e imprimi os resultados encontrados. 

No main podemos efeturar as chamadas de metodos a partir de um simples menu, a partir das escolhas feitas o metodo corespondente ira resolver o problema. Ao escolher a opção 1 o metodo inseri é chamado, onde sera possivel inserir um cpf a arvore. Na opção 2 chamara a função retira que era remover a cpf dado, se ele existir, da arvore. Na opção 3 o metodo imprimir sera chamado, nele é feita uma pesquisa do intervalo em que o cpf pertence, assim será possivel saber em qual arquivo esta, imprimindo assim, os dados do cliente requisitado.
