#include <stdio.h>

int main(){
	struct Veiculo{
		char nome[10];
		char marca[15];
		int ano;
		char cor[10];
		float preco;
	};

	struct Veiculo carros[3];

	printf("Preencha os carros: \n");

	for (int i = 0; i<3; i++){

		printf("Nome do carro: \n");
		scanf("%[^\n]", carros[i].nome);
		getchar();

		printf("Marca: \n");
		scanf("%[^\n]", carros[i].marca);
		getchar();

		printf("Ano: \n");
		scanf("%d", &carros[i].ano);
		getchar();

		printf("Cor: \n");
		scanf("%[^\n]", carros[i].cor);
		getchar();

		printf("Preco: \n");
		scanf("%f", &carros[i].preco);
		getchar();
	}

	for (int i = 0; i<3; i++){
        printf("----------------------------------------");
        printf("\n");
		printf("Nome do carro: %s\n", carros[i].nome);

		printf("Marca: %s\n", carros[i].marca);

		printf("Ano: %d\n", carros[i].ano);

		printf("Cor: %s\n", carros[i].cor);

		printf("Preco: %f\n", carros[i].preco);
        printf("\n");
	}

}
