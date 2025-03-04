#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char codigoCidade1[3]; 
    char nomeCidade1[20];
    int populacaoCidade1;
    int areaCidade1;
    int pibCidade1;
    int pontosTuristicosCidade1;
    float densidadePopulacionalCidade1;
    float pibPerCaptaCidade1;
    float superPoderCarta1;
    int resultadoCidade1, resultadoCidade2, escolhaAtributo1, escolhaAtributo2;

    printf("Olá! Primeiro vamos definir o código da cidade! \n");
    printf("Escolha de A a H para o código do estado e de 01 a 04 para o código da cidade.\n");
    printf("Exemplo: C01\n");
    scanf("%3s", codigoCidade1);
    printf("Digite agora o nome da cidade: \n");
    scanf(" %20s", nomeCidade1);
    printf("Digite o tamanho da população dessa cidade: \n");
    scanf("%d", &populacaoCidade1);
    printf("Digite a área da cidade: \n");
    scanf("%d", &areaCidade1);
    printf("Digite o PIB da cidade: \n");
    scanf("%d", &pibCidade1);
    printf("Quantos pontos turísticos a cidade tem?\n");
    scanf("%d", &pontosTuristicosCidade1);

    densidadePopulacionalCidade1 = (float)populacaoCidade1 / areaCidade1;
    pibPerCaptaCidade1 = (float) pibCidade1 / populacaoCidade1;
    superPoderCarta1 = populacaoCidade1 + areaCidade1 + pibCidade1 +pontosTuristicosCidade1 - densidadePopulacionalCidade1;

    printf("Código da cidade escolhido: %s\n", codigoCidade1);
    printf("Nome da cidade: %s\n", nomeCidade1);
    printf("Tamanho da população: %d\n", populacaoCidade1);
    printf("Area da cidade: %d\n", areaCidade1);
    printf("PIB da cidade: %d\n", pibCidade1);
    printf("Quantidade de pontos turístico: %d\n", pontosTuristicosCidade1);
    printf("Densidade Populacional: %.2f\n", densidadePopulacionalCidade1);
    printf("PIB percapta: %.2f\n", pibPerCaptaCidade1);
    printf("Super poder da carta 1: %.2f\n", superPoderCarta1);
    

    char codigoCidade2[3]; 
    char nomeCidade2[20];
    int populacaoCidade2;
    int areaCidade2;
    int pibCidade2;
    int pontosTuristicosCidade2;
    float densidadePopulacionalCidade2;
    float pibPerCaptaCidade2;
    float superPoderCarta2;

    printf("\n");
    printf("\n");

    printf("Agora vamos para a cidade 2! \n");
    printf("Escolha de A a H para o código do estado e de 01 a 04 para o código da cidade.\n");
    printf("Exemplo: C01\n");
    scanf("%3s", &codigoCidade2);
    printf("Digite agora o nome da cidade: \n");
    scanf(" %20s", &nomeCidade2);
    printf("Digite o tamanho da população dessa cidade: \n");
    scanf("%d", &populacaoCidade2);
    printf("Digite a área da cidade: \n");
    scanf("%d", &areaCidade2);
    printf("Digite o PIB da cidade: \n");
    scanf("%d", &pibCidade2);
    printf("Quantos pontos turísticos a cidade tem?\n");
    scanf("%d", &pontosTuristicosCidade2);

    densidadePopulacionalCidade2 = (float)populacaoCidade2 / areaCidade2;
    pibPerCaptaCidade2 = (float) pibCidade2 / populacaoCidade2;
    superPoderCarta2 = populacaoCidade2 + areaCidade2 + pibCidade2 +pontosTuristicosCidade2 - densidadePopulacionalCidade2;
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("Código da cidade escolhido: %s\n", codigoCidade2);
    printf("Nome da cidade: %s\n", nomeCidade2);
    printf("Tamanho da população: %d\n", populacaoCidade2);
    printf("Area da cidade: %d\n", areaCidade2);
    printf("PIB da cidade: %d\n", pibCidade2);
    printf("Quantidade de pontos turístico: %d\n", pontosTuristicosCidade2);
    printf("Densidade Populacional: %.2f\n", densidadePopulacionalCidade2);
    printf("PIB percapta: %.2f\n", pibPerCaptaCidade2);
    printf("Super poder da carta 2: %.2f\n", superPoderCarta2);
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\nCartas cadastradas agora vamos comparar! \n");
    printf("Você deve escolher dois atributos para comparar. Escolha o primeiro: \n");
    printf("1. População\n");
    printf("2. Area da cidade\n");
    printf("3. PIB da cidade\n");
    printf("4. Quantidade de pontos Turísticos\n");
    printf("5. Densidade populacional\n");
    scanf("%d", &escolhaAtributo1);

    switch (escolhaAtributo1)
    {
    case 1:
        printf("Ok, agora vamos escolher o segundo atributo:\n");
        printf("1. Area da cidade\n");
        printf("2. PIB da cidade\n");
        printf("3. Quantidade de pontos Turísticos\n");
        printf("4. Densidade populacional\n");
        scanf("%d", &escolhaAtributo2);
        switch (escolhaAtributo2){   
            //Abaixo a comparação vai ser População vs Area da cidade    
            case 1:
            printf("Comparando **População** e **Área da Cidade** das cidades %s e %s\n", nomeCidade1, nomeCidade2);
            printf("População de %s é: %d\n", nomeCidade1, populacaoCidade1);
            printf("População de %s é: %d\n", nomeCidade2, populacaoCidade2);
            printf("Área de %s é: %d\n", nomeCidade1, areaCidade1);
            printf("Área de %s é: %d\n", nomeCidade2, areaCidade2);
            resultadoCidade1 = populacaoCidade1 + areaCidade1;
            resultadoCidade2 = populacaoCidade2 + areaCidade2;
            if (resultadoCidade1>resultadoCidade2)
            {
                printf("A cidade %s venceu, pois a soma dos atributos resultou em um número maior\n", nomeCidade1);
            }else if(resultadoCidade1<resultadoCidade2){
                printf("A cidade %s venceu, pois a soma dos atributos resultou em um número maior\n", nomeCidade2);
            }else{
                printf("Empate!\n");
            }
            
            break;
            //Abaixo a comparação vai ser População vs PIB
            case 2:
            printf("Comparando **População** e **PIB** das cidades %s e %s\n", nomeCidade1, nomeCidade2);
            printf("População de %s é: %d\n", nomeCidade1, populacaoCidade1);
            printf("População de %s é: %d\n", nomeCidade2, populacaoCidade2);
            printf("O PIB de %s é: %d\n", nomeCidade1, pibCidade1);
            printf("O PIB de %s é: %d\n", nomeCidade2, pibCidade2);
            resultadoCidade1 = populacaoCidade1 + pibCidade1;
            resultadoCidade2 = populacaoCidade2 + pibCidade2;
            if (resultadoCidade1>resultadoCidade2)
            {
                printf("A cidade %s venceu, pois a soma dos atributos resultou em um número maior\n", nomeCidade1);
            }else if(resultadoCidade1<resultadoCidade2){
                printf("A cidade %s venceu, pois a soma dos atributos resultou em um número maior\n", nomeCidade2);
            }else{
                printf("Empate!\n");
            }
            
            break;
            //Abaixo a comparação vai ser População vs Quantidade pontos turísticos
            case 3:
            printf("Comparando **População** e **Quantidade de Pontos Turísticos** das cidades %s e %s\n", nomeCidade1, nomeCidade2);
            printf("População de %s é: %d\n", nomeCidade1, populacaoCidade1);
            printf("População de %s é: %d\n", nomeCidade2, populacaoCidade2);
            printf(" %s tem %d pontos turísticos\n", nomeCidade1, pontosTuristicosCidade1);
            printf(" %s tem %d pontos turísticos\n", nomeCidade2, pontosTuristicosCidade2);
            resultadoCidade1 = populacaoCidade1 + pontosTuristicosCidade1;
            resultadoCidade2 = populacaoCidade2 + pontosTuristicosCidade2;
            if (resultadoCidade1>resultadoCidade2)
            {
                printf("A cidade %s venceu, pois a soma dos atributos resultou em um número maior\n", nomeCidade1);
            }else if(resultadoCidade1<resultadoCidade2){
                printf("A cidade %s venceu, pois a soma dos atributos resultou em um número maior\n", nomeCidade2);
            }else{
                printf("Empate!\n");
            }
            
            break;
            //Abaixo a comparação vai ser População vs Densidade Populacional
            case 4:
            printf("Comparando **População** e **Densidade Populacional** das cidades %s e %s\n", nomeCidade1, nomeCidade2);
            printf("População de %s é: %d\n", nomeCidade1, populacaoCidade1);
            printf("População de %s é: %d\n", nomeCidade2, populacaoCidade2);
            printf("A densidade populacional de %s é de %.2f\n", nomeCidade1, densidadePopulacionalCidade1);
            printf("A densidade populacional de %s é de %.2f\n", nomeCidade2, densidadePopulacionalCidade2);
            resultadoCidade1 = populacaoCidade1 - densidadePopulacionalCidade1;
            resultadoCidade2 = populacaoCidade2 - densidadePopulacionalCidade2;
            if (resultadoCidade1>resultadoCidade2)
            {
                printf("A cidade %s venceu, pois a soma dos atributos resultou em um número maior\n", nomeCidade1);
            }else if(resultadoCidade1<resultadoCidade2){
                printf("A cidade %s venceu, pois a soma dos atributos resultou em um número maior\n", nomeCidade2);
            }else{
                printf("Empate!\n");
            }
            
            break;
            default:
            printf("Opção inválida\n");
            break;
            //Fim da comparação da População com os outros atributos
        }
        break;
        //O usuário escolheu Área da cidade como 1º atributos
        case 2:
        printf("Ok, agora vamos escolher o segundo atributo\n:");
        printf("1. População\n");
        printf("2. PIB da cidade\n");
        printf("3. Quantidade de pontos Turísticos\n");
        printf("4. Densidade populacional\n");
        scanf("%d", &escolhaAtributo2);
        switch (escolhaAtributo2){   
            //Abaixo a comparação vai ser Area da cidade vs População 
            case 1:
            printf("Comparando **Área da cidade** e **População** das cidades %s e %s\n", nomeCidade1, nomeCidade2);
            printf("Área de %s é: %d\n", nomeCidade1, areaCidade1);
            printf("Área de %s é: %d\n", nomeCidade2, areaCidade2);
            printf("População de %s é: %d\n", nomeCidade1, populacaoCidade1);
            printf("População de %s é: %d\n", nomeCidade2, populacaoCidade2);
            
            resultadoCidade1 = populacaoCidade1 + areaCidade1;
            resultadoCidade2 = populacaoCidade2 + areaCidade2;
            if (resultadoCidade1>resultadoCidade2)
            {
                printf("A cidade %s venceu, pois a soma dos atributos resultou em um número maior\n", nomeCidade1);
            }else if(resultadoCidade1<resultadoCidade2){
                printf("A cidade %s venceu, pois a soma dos atributos resultou em um número maior\n", nomeCidade2);
            }else{
                printf("Empate!\n");
            }
            
            break;
            //Abaixo a comparação vai ser Área da cidade vs PIB
            case 2:
            printf("Comparando **Área da cidade** e **PIB** das cidades %s e %s\n", nomeCidade1, nomeCidade2);
            printf("Área da cidade %s é: %d\n", nomeCidade1, areaCidade1);
            printf("Área da cidade %s é: %d\n", nomeCidade2, areaCidade2);
            printf("O PIB de %s é: %d\n", nomeCidade1, pibCidade1);
            printf("O PIB de %s é: %d\n", nomeCidade2, pibCidade2);
            resultadoCidade1 = areaCidade1 + pibCidade1;
            resultadoCidade2 = areaCidade2 + pibCidade2;
            if (resultadoCidade1>resultadoCidade2)
            {
                printf("A cidade %s venceu, pois a soma dos atributos resultou em um número maior\n", nomeCidade1);
            }else if(resultadoCidade1<resultadoCidade2){
                printf("A cidade %s venceu, pois a soma dos atributos resultou em um número maior\n", nomeCidade2);
            }else{
                printf("Empate!\n");
            }
            
            break;
            //Abaixo a comparação vai ser Área da cidade vs Quantidade pontos turísticos
            case 3:
            printf("Comparando **Área da cidade** e **Quantidade de Pontos Turísticos** das cidades %s e %s\n", nomeCidade1, nomeCidade2);
            printf("Área da cidade %s é: %d\n", nomeCidade1, areaCidade1);
            printf("Área da cidade %s é: %d\n", nomeCidade2, areaCidade2);
            printf(" %s tem %d pontos turísticos\n", nomeCidade1, pontosTuristicosCidade1);
            printf(" %s tem %d pontos turísticos\n", nomeCidade2, pontosTuristicosCidade2);
            resultadoCidade1 = areaCidade1 + pontosTuristicosCidade1;
            resultadoCidade2 = areaCidade2 + pontosTuristicosCidade2;
            if (resultadoCidade1>resultadoCidade2)
            {
                printf("A cidade %s venceu, pois a soma dos atributos resultou em um número maior\n", nomeCidade1);
            }else if(resultadoCidade1<resultadoCidade2){
                printf("A cidade %s venceu, pois a soma dos atributos resultou em um número maior\n", nomeCidade2);
            }else{
                printf("Empate!\n");
            }
            
            break;
            //Abaixo a comparação vai ser Área da cidade vs Densidade Populacional
            case 4:
            printf("Comparando **Área da cidade** e **Densidade Populacional** das cidades %s e %s\n", nomeCidade1, nomeCidade2);
            printf("Área da cidade %s é: %d\n", nomeCidade1, areaCidade1);
            printf("Área da cidade %s é: %d\n", nomeCidade2, areaCidade2);
            printf("A densidade populacional de %s é de %.2f\n", nomeCidade1, densidadePopulacionalCidade1);
            printf("A densidade populacional de %s é de %.2f\n", nomeCidade2, densidadePopulacionalCidade2);
            resultadoCidade1 = areaCidade1 - densidadePopulacionalCidade1;
            resultadoCidade2 = areaCidade2 - densidadePopulacionalCidade2;
            if (resultadoCidade1>resultadoCidade2)
            {
                printf("A cidade %s venceu, pois a soma dos atributos resultou em um número maior\n", nomeCidade1);
            }else if(resultadoCidade1<resultadoCidade2){
                printf("A cidade %s venceu, pois a soma dos atributos resultou em um número maior\n", nomeCidade2);
            }else{
                printf("Empate!\n");
            }
            
            break;
            default:
            printf("Opção inválida\n");
            break;
            //Fim da comparação da População com os outros atributos
        }
        break;
        //O usuario escolheu Pib como 1ª atributo
        case 3:
        printf("Ok, agora vamos escolher o segundo atributo\n:");
        printf("1. População\n");
        printf("2. Área da cidade\n");
        printf("3. Quantidade de pontos Turísticos\n");
        printf("4. Densidade populacional\n");
        scanf("%d", &escolhaAtributo2);
        switch (escolhaAtributo2){   
            //Abaixo a comparação vai ser PIB vs População 
            case 1:
            printf("Comparando **PIB** e **População** das cidades %s e %s\n", nomeCidade1, nomeCidade2);
            printf("O PIB de %s é de: %d\n", nomeCidade1, pibCidade1);
            printf("O PIB de %s é de: %d\n", nomeCidade2, pibCidade2);
            printf("População de %s é: %d\n", nomeCidade1, populacaoCidade1);
            printf("População de %s é: %d\n", nomeCidade2, populacaoCidade2);
            
            resultadoCidade1 = pibCidade1 + populacaoCidade1;
            resultadoCidade2 = pibCidade2 + populacaoCidade2;
            if (resultadoCidade1>resultadoCidade2)
            {
                printf("A cidade %s venceu, pois a soma dos atributos resultou em um número maior\n", nomeCidade1);
            }else if(resultadoCidade1<resultadoCidade2){
                printf("A cidade %s venceu, pois a soma dos atributos resultou em um número maior\n", nomeCidade2);
            }else{
                printf("Empate!\n");
            }
            
            break;
            //Abaixo a comparação vai ser PIB vs Área da cidade 
            case 2:
            printf("Comparando **PIB** e **Área da cidade** das cidades %s e %s\n", nomeCidade1, nomeCidade2);
            printf("O PIB de %s é: %d\n", nomeCidade1, pibCidade1);
            printf("O PIB de %s é: %d\n", nomeCidade2, pibCidade2);
            printf("Área da cidade %s é: %d\n", nomeCidade1, areaCidade1);
            printf("Área da cidade %s é: %d\n", nomeCidade2, areaCidade2);
            
            resultadoCidade1 = areaCidade1 + pibCidade1;
            resultadoCidade2 = areaCidade2 + pibCidade2;
            if (resultadoCidade1>resultadoCidade2)
            {
                printf("A cidade %s venceu, pois a soma dos atributos resultou em um número maior\n", nomeCidade1);
            }else if(resultadoCidade1<resultadoCidade2){
                printf("A cidade %s venceu, pois a soma dos atributos resultou em um número maior\n", nomeCidade2);
            }else{
                printf("Empate!\n");
            }
            
            break;
            //Abaixo a comparação vai ser PIB vs Quantidade pontos turísticos
            case 3:
            printf("Comparando **PIB** e **Quantidade de Pontos Turísticos** das cidades %s e %s\n", nomeCidade1, nomeCidade2);
            printf("O PIB de %s é: %d\n", nomeCidade1, pibCidade1);
            printf("O PIB de %s é: %d\n", nomeCidade2, pibCidade2);
            printf(" %s tem %d pontos turísticos\n", nomeCidade1, pontosTuristicosCidade1);
            printf(" %s tem %d pontos turísticos\n", nomeCidade2, pontosTuristicosCidade2);
            resultadoCidade1 = pibCidade1 + pontosTuristicosCidade1;
            resultadoCidade2 = pibCidade2 + pontosTuristicosCidade2;
            if (resultadoCidade1>resultadoCidade2)
            {
                printf("A cidade %s venceu, pois a soma dos atributos resultou em um número maior\n", nomeCidade1);
            }else if(resultadoCidade1<resultadoCidade2){
                printf("A cidade %s venceu, pois a soma dos atributos resultou em um número maior\n", nomeCidade2);
            }else{
                printf("Empate!\n");
            }
            
            break;
            //Abaixo a comparação vai ser PIB vs Densidade Populacional
            case 4:
            printf("Comparando **PIB** e **Densidade Populacional** das cidades %s e %s\n", nomeCidade1, nomeCidade2);
            printf("PIB de %s é de: %d\n", nomeCidade1, pibCidade1);
            printf("PIB de %s é de: %d\n", nomeCidade2, pibCidade2);
            printf("A densidade populacional de %s é de %.2f\n", nomeCidade1, densidadePopulacionalCidade1);
            printf("A densidade populacional de %s é de %.2f\n", nomeCidade2, densidadePopulacionalCidade2);
            resultadoCidade1 = pibCidade1 - densidadePopulacionalCidade1;
            resultadoCidade2 = pibCidade2 - densidadePopulacionalCidade2;
            if (resultadoCidade1>resultadoCidade2)
            {
                printf("A cidade %s venceu, pois a soma dos atributos resultou em um número maior\n", nomeCidade1);
            }else if(resultadoCidade1<resultadoCidade2){
                printf("A cidade %s venceu, pois a soma dos atributos resultou em um número maior\n", nomeCidade2);
            }else{
                printf("Empate!\n");
            }
            
            break;
            default:
            printf("Opção inválida\n");
            break;
            //Fim da comparação da PIB com os outros atributos
        }
        break;
            //O usuario escolheu Quantidade de pontos turísticos como 1ª atributo
         case 4:
            printf("Ok, agora vamos escolher o segundo atributo\n:");
            printf("1. População\n");
            printf("2. Área da cidade\n");
            printf("3. PIB\n");
            printf("4. Densidade populacional\n");
            scanf("%d", &escolhaAtributo2);
            switch (escolhaAtributo2){   
                //Abaixo a comparação vai ser Quantidade de pontos turísticos vs População 
                case 1:
                printf("Comparando **Quantidade de pontos turísticos** e **População** das cidades %s e %s\n", nomeCidade1, nomeCidade2);
                printf("%s tem %d pontos turísticos\n", nomeCidade1, pontosTuristicosCidade1);
                printf("%s tem %d pontos turísticos\n", nomeCidade2, pontosTuristicosCidade2);
                printf("População de %s é: %d\n", nomeCidade1, populacaoCidade1);
                printf("População de %s é: %d\n", nomeCidade2, populacaoCidade2);
                
                resultadoCidade1 = pontosTuristicosCidade1 + populacaoCidade1;
                resultadoCidade2 = pontosTuristicosCidade2 + populacaoCidade2;
                if (resultadoCidade1>resultadoCidade2)
                {
                    printf("A cidade %s venceu, pois a soma dos atributos resultou em um número maior\n", nomeCidade1);
                }else if(resultadoCidade1<resultadoCidade2){
                    printf("A cidade %s venceu, pois a soma dos atributos resultou em um número maior\n", nomeCidade2);
                }else{
                    printf("Empate!\n");
                }
                
                break;
                //Abaixo a comparação vai ser Quantidade de pontos turísticos vs Área da cidade 
                case 2:
                printf("Comparando **Quantidade de pontos turísticos** e **Área da cidade** das cidades %s e %s\n", nomeCidade1, nomeCidade2);
                printf("%s tem %d pontos turísticos\n", nomeCidade1, pontosTuristicosCidade1);
                printf("%s tem %d pontos turísticos\n", nomeCidade2, pontosTuristicosCidade2);
                printf("Área da cidade %s é: %d\n", nomeCidade1, areaCidade1);
                printf("Área da cidade %s é: %d\n", nomeCidade2, areaCidade2);
                
                resultadoCidade1 = areaCidade1 + pontosTuristicosCidade1;
                resultadoCidade2 = areaCidade2 + pontosTuristicosCidade2;
                if (resultadoCidade1>resultadoCidade2)
                {
                    printf("A cidade %s venceu, pois a soma dos atributos resultou em um número maior\n", nomeCidade1);
                }else if(resultadoCidade1<resultadoCidade2){
                    printf("A cidade %s venceu, pois a soma dos atributos resultou em um número maior\n", nomeCidade2);
                }else{
                    printf("Empate!\n");
                }
                
                break;
                //Abaixo a comparação vai ser Quantidade pontos turísticos vs PIB 
                case 3:
                printf("Comparando **Quantidade pontos turísticos** e **PIB** das cidades %s e %s\n", nomeCidade1, nomeCidade2);
                printf(" %s tem %d pontos turísticos\n", nomeCidade1, pontosTuristicosCidade1);
                printf(" %s tem %d pontos turísticos\n", nomeCidade2, pontosTuristicosCidade2);
                printf("O PIB de %s é: %d\n", nomeCidade1, pibCidade1);
                printf("O PIB de %s é: %d\n", nomeCidade2, pibCidade2);
                resultadoCidade1 = pibCidade1 + pontosTuristicosCidade1;
                resultadoCidade2 = pibCidade2 + pontosTuristicosCidade2;
                if (resultadoCidade1>resultadoCidade2)
                {
                    printf("A cidade %s venceu, pois a soma dos atributos resultou em um número maior\n", nomeCidade1);
                }else if(resultadoCidade1<resultadoCidade2){
                    printf("A cidade %s venceu, pois a soma dos atributos resultou em um número maior\n", nomeCidade2);
                }else{
                    printf("Empate!\n");
                }
                
                break;
                //Abaixo a comparação vai ser Quantidade pontos turísticos vs Densidade Populacional
                case 4:
                printf("Comparando **Quantidade pontos turísticos** e **Densidade Populacional** das cidades %s e %s\n", nomeCidade1, nomeCidade2);
                printf(" %s tem %d pontos turísticos\n", nomeCidade1, pontosTuristicosCidade1);
                printf(" %s tem %d pontos turísticos\n", nomeCidade2, pontosTuristicosCidade2);
                printf("A densidade populacional de %s é de %.2f\n", nomeCidade1, densidadePopulacionalCidade1);
                printf("A densidade populacional de %s é de %.2f\n", nomeCidade2, densidadePopulacionalCidade2);
                resultadoCidade1 = pontosTuristicosCidade1 - densidadePopulacionalCidade1;
                resultadoCidade2 = pontosTuristicosCidade2 - densidadePopulacionalCidade2;
                if (resultadoCidade1>resultadoCidade2)
                {
                    printf("A cidade %s venceu, pois a soma dos atributos resultou em um número maior\n", nomeCidade1);
                }else if(resultadoCidade1<resultadoCidade2){
                    printf("A cidade %s venceu, pois a soma dos atributos resultou em um número maior\n", nomeCidade2);
                }else{
                    printf("Empate!\n");
                }
                
                break;
                default:
                printf("Opção inválida\n");
                break;
                //Fim da comparação da Quantidade de Pontos turísticos com os outros atributos
            }
            break;
                //O usuario escolheu Densidade Populacional como 1ª atributo
                case 5:
                printf("Ok, agora vamos escolher o segundo atributo\n:");
                printf("1. População\n");
                printf("2. Área da cidade\n");
                printf("3. PIB\n");
                printf("4. Quantidade de Pontos Turísticos\n");
                scanf("%d", &escolhaAtributo2);
                switch (escolhaAtributo2){   
                    //Abaixo a comparação vai ser Densidade Populacional vs População 
                    case 1:
                    printf("Comparando **Densidade Populacional** e **População** das cidades %s e %s\n", nomeCidade1, nomeCidade2);
                    printf("%s tem %.2f de densidade populacional\n", nomeCidade1, densidadePopulacionalCidade1);
                    printf("%s tem %.2f de densidade populacional\n", nomeCidade2, densidadePopulacionalCidade2);
                    printf("População de %s é: %d\n", nomeCidade1, populacaoCidade1);
                    printf("População de %s é: %d\n", nomeCidade2, populacaoCidade2);
                    
                    resultadoCidade1 =  populacaoCidade1 - densidadePopulacionalCidade1;
                    resultadoCidade2 =  populacaoCidade2 - densidadePopulacionalCidade2;
                    if (resultadoCidade1>resultadoCidade2)
                    {
                        printf("A cidade %s venceu, pois a soma dos atributos resultou em um número maior\n", nomeCidade1);
                    }else if(resultadoCidade1<resultadoCidade2){
                        printf("A cidade %s venceu, pois a soma dos atributos resultou em um número maior\n", nomeCidade2);
                    }else{
                        printf("Empate!\n");
                    }
                    
                    break;
                    //Abaixo a comparação vai ser Densidade Populacional vs Área da cidade 
                    case 2:
                    printf("Comparando **Densidade Populacional** e **Área da cidade** das cidades %s e %s\n", nomeCidade1, nomeCidade2);
                    printf("%s tem %.2f de densidade populacional\n", nomeCidade1, densidadePopulacionalCidade1);
                    printf("%s tem %.2f de densidade populacional\n", nomeCidade2, densidadePopulacionalCidade2);
                    printf("Área da cidade %s é: %d\n", nomeCidade1, areaCidade1);
                    printf("Área da cidade %s é: %d\n", nomeCidade2, areaCidade2);
                    
                    resultadoCidade1 = areaCidade1 - densidadePopulacionalCidade1;
                    resultadoCidade2 = areaCidade2 - densidadePopulacionalCidade2;
                    if (resultadoCidade1>resultadoCidade2)
                    {
                        printf("A cidade %s venceu, pois a soma dos atributos resultou em um número maior\n", nomeCidade1);
                    }else if(resultadoCidade1<resultadoCidade2){
                        printf("A cidade %s venceu, pois a soma dos atributos resultou em um número maior\n", nomeCidade2);
                    }else{
                        printf("Empate!\n");
                    }
                    
                    break;
                    //Abaixo a comparação vai ser Densidade Populacional vs PIB 
                    case 3:
                    printf("Comparando **Densidade Populacional** e **PIB** das cidades %s e %s\n", nomeCidade1, nomeCidade2);
                    printf("%s tem %.2f de densidade populacional\n", nomeCidade1, densidadePopulacionalCidade1);
                    printf("%s tem %.2f de densidade populacional\n", nomeCidade2, densidadePopulacionalCidade2);
                    printf("O PIB de %s é: %d\n", nomeCidade1, pibCidade1);
                    printf("O PIB de %s é: %d\n", nomeCidade2, pibCidade2);
                    resultadoCidade1 = pibCidade1 - densidadePopulacionalCidade1;
                    resultadoCidade2 = pibCidade2 - densidadePopulacionalCidade2;
                    if (resultadoCidade1>resultadoCidade2)
                    {
                        printf("A cidade %s venceu, pois a soma dos atributos resultou em um número maior\n", nomeCidade1);
                    }else if(resultadoCidade1<resultadoCidade2){
                        printf("A cidade %s venceu, pois a soma dos atributos resultou em um número maior\n", nomeCidade2);
                    }else{
                        printf("Empate!\n");
                    }
                    
                    break;
                    //Abaixo a comparação vai ser Densidade Populacional bs Quantidade pontos turísticos 
                    case 4:
                    printf("Comparando **Densidade Populacional** e **Quantidade pontos turísticos** das cidades %s e %s\n", nomeCidade1, nomeCidade2);
                    printf("A densidade populacional de %s é de %.2f\n", nomeCidade1, densidadePopulacionalCidade1);
                    printf("A densidade populacional de %s é de %.2f\n", nomeCidade2, densidadePopulacionalCidade2);
                    printf(" %s tem %d pontos turísticos\n", nomeCidade1, pontosTuristicosCidade1);
                    printf(" %s tem %d pontos turísticos\n", nomeCidade2, pontosTuristicosCidade2);
                    
                    resultadoCidade1 = pontosTuristicosCidade1 - densidadePopulacionalCidade1;
                    resultadoCidade2 = pontosTuristicosCidade2 - densidadePopulacionalCidade2;
                    if (resultadoCidade1>resultadoCidade2)
                    {
                        printf("A cidade %s venceu, pois a soma dos atributos resultou em um número maior\n", nomeCidade1);
                    }else if(resultadoCidade1<resultadoCidade2){
                        printf("A cidade %s venceu, pois a soma dos atributos resultou em um número maior\n", nomeCidade2);
                    }else{
                        printf("Empate!\n");
                    }
                    
                    break;
                    default:
                    printf("Opção inválida\n");
                    break;
                    //Fim da comparação da Quantidade de Pontos turísticos com os outros atributos
                }
                break;
    default:
    printf("Opção inválida\n");
        break;
    }
    return 0;
}