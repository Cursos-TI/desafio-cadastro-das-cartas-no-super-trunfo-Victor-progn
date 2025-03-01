#include <stdio.h>

#define MAX_ESTADOS 8
#define MAX_CIDADES 4
#define NOME_CIDADE_SIZE 10

// Estrutura para armazenar as informações de uma cidade
struct Cidade {
    char nome[NOME_CIDADE_SIZE];  // Nome da cidade (1 a 4)
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    int numeroCarta; // Número do grupo da carta
    float densidadePopulacional; // Densidade populacional
    float pibPerCapita; // PIB per capita
};

// Estrutura para armazenar as informações de um estado
struct Estado {
    char nome[2]; // Nome do estado (A a H)
    struct Cidade cidades[MAX_CIDADES];  // 4 cidades por estado
};

// Função para coletar os dados de uma cidade
void coletarDadosCidade(struct Cidade *cidade) {
    printf("\nDigite a população da cidade %s: ", cidade->nome);
    scanf("%d", &cidade->populacao);

    printf("Digite a área da cidade %s (em m²): ", cidade->nome);
    scanf("%f", &cidade->area);

    printf("Digite o PIB da cidade %s: ", cidade->nome);
    scanf("%f", &cidade->pib);

    printf("Digite o número de pontos turísticos da cidade %s: ", cidade->nome);
    scanf("%d", &cidade->pontosTuristicos);

    printf("Digite o número do grupo da carta à qual a cidade %s pertence: ", cidade->nome);
    scanf("%d", &cidade->numeroCarta);
}

// Função para calcular densidade populacional e PIB per capita
void calcularIndicadores(struct Cidade *cidade) {
    if (cidade->area > 0) {
        cidade->densidadePopulacional = cidade->populacao / cidade->area;
    } else {
        cidade->densidadePopulacional = 0;
    }

    if (cidade->populacao > 0) {
        cidade->pibPerCapita = cidade->pib / cidade->populacao;
    } else {
        cidade->pibPerCapita = 0;
    }
}

int main() {
    struct Estado estados[MAX_ESTADOS];  // 8 estados: A a H
    int i, j;

    // Atribui os nomes dos estados (A a H) e cidades (1 a 4)
    for (i = 0; i < MAX_ESTADOS; i++) {
        // Define o nome do estado como A, B, ..., H
        estados[i].nome[0] = 'A' + i;
        estados[i].nome[1] = '\0'; // Adiciona o caractere nulo para a string

        for (j = 0; j < MAX_CIDADES; j++) {
            // Define o nome da cidade como "1", "2", "3", "4"
            estados[i].cidades[j].nome[0] = '1' + j;  // Define '1', '2', '3', '4'
            estados[i].cidades[j].nome[1] = '\0';  // Adiciona o caractere nulo para a string

            // Entrada de dados para cada cidade
            printf("\nEstado %s, Cidade %s:\n", estados[i].nome, estados[i].cidades[j].nome);
            coletarDadosCidade(&estados[i].cidades[j]);
            calcularIndicadores(&estados[i].cidades[j]);
        }
    }

    // Exibe as informações coletadas
    for (i = 0; i < MAX_ESTADOS; i++) {
        printf("\nEstado %s:\n", estados[i].nome);
        for (j = 0; j < MAX_CIDADES; j++) {
            printf("\nCidade %s:\n", estados[i].cidades[j].nome);
            printf("População: %d\n", estados[i].cidades[j].populacao);
            printf("Área: %.2f m²\n", estados[i].cidades[j].area);
            printf("PIB: %.2f\n", estados[i].cidades[j].pib);
            printf("Pontos turísticos: %d\n", estados[i].cidades[j].pontosTuristicos);
            printf("Número da carta: %d\n", estados[i].cidades[j].numeroCarta);
            printf("Densidade populacional: %.2f habitantes/m²\n", estados[i].cidades[j].densidadePopulacional);
            printf("PIB per capita: %.2f\n", estados[i].cidades[j].pibPerCapita);
        }
    }

    return 0;
}

