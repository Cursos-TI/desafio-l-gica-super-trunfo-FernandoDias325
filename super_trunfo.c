#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N_CARTAS 32

void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

/*
    Carta 1:
    Estado: A
    Código: A01
    Nome da Cidade: São Paulo
    População: 12325000
    Área: 1521.11 km²
    PIB: 699.28 bilhões de reais
    Número de Pontos Turísticos: 50

    Carta 2:
    Estado: B
    Código: B02
    Nome da Cidade: Rio de Janeiro
    População: 6748000
    Área: 1200.25 km²
    PIB: 300.50 bilhões de reais
    Número de Pontos Turísticos: 30    
*/


    //Super Trunfo em c: Fundamentos e Técnicas Avançadas
int main() {
    // var primeira carta
    char C1_Estado[20];
    char C1_CodCarta[20];
    char C1_cidade[20];
    int C1_populacao;
    float C1_area;
    float C1_pib;
    int C1_numero_de_pontos_turisticos;
    int C1_pontos; // Pontos para determinar o ganhador

    // var segunda carta
    char C2_Estado[20];
    char C2_CodCarta[20];
    char C2_cidade[20];
    int C2_populacao;
    float C2_area;
    float C2_pib;
    int C2_numero_de_pontos_turisticos;
    int C2_pontos; // Pontos para determinar o ganhador


    printf("====================\n");
    printf("SUPER TRUNFO\n");
    printf("===================\n");
    printf("Vamos jogar!\n");

    // Entrada de dados da 1ª carta
    printf("====================\n");
    printf("Vamos entrar com os dados da 1ª carta\n");
    printf("Digite uma letra para representar o estado[A, B, C, D, E, F, G, H]:\n");
    scanf("%s", & C1_Estado);
    limpar_buffer();
    printf("Escolha um numero para o codigo da carta, uma letra do estado seguida de um nuemro [A01, B09, C03]:\n");
    scanf("%s", & C1_CodCarta);
    limpar_buffer();
    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]%*c", C1_cidade); //funciona so precisa do espaco
    limpar_buffer();
    printf("Digite a populacao da cidade:\n");
    scanf("%d", &C1_populacao);
    limpar_buffer();
    printf("Digite a area da cidade: \n");
    scanf("%f", &C1_area); // Use %f para float
    limpar_buffer();
    printf("Digite o pib da cidade: \n");
    scanf("%f", &C1_pib); // Use %f para float
    limpar_buffer();
    printf("Digite o numero de pontos turisticos da cidade: \n");
    scanf("%d", &C1_numero_de_pontos_turisticos);
    limpar_buffer();
    printf("=======================================================\n");

    // Eximindo os dados da 1ª carta
    printf("Carta 1:\n");
    printf("Estado: %s\n", C1_Estado);
    printf("Codigo da carta: %s\n", C1_CodCarta);
    printf("Nome da cidade: %s\n", C1_cidade);
    printf("Populacao: %d\n", C1_populacao);
    printf("Area: %.2f km²\n", C1_area);
    printf("PIB: %.2f bilhões de reais\n", C1_pib);
    printf("Numero de pontos turisticos: %d\n", C1_numero_de_pontos_turisticos);
    printf("=======================================================\n");
    
    // Entrada de dados da 2ª carta
    printf("Vamos entrar com os dados da 2ª carta\n");
    printf("Digite uma letra para representar o estado[A, B, C, D, E, F, G, H]:\n");
    scanf("%s", C2_Estado);
    limpar_buffer();
    printf("Escolha um numero para o codigo da carta, uma letra do estado seguida de um nuemro [A01, B09, C03]:\n");
    scanf("%s", C2_CodCarta);
    limpar_buffer();
    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]%*c", C2_cidade);
    limpar_buffer();
    printf("Digite a populacao da cidade:\n");
    scanf("%d", &C2_populacao);
    limpar_buffer();
    printf("Digite a area da cidade:\n");
    scanf("%f", &C2_area); // Use %f para float
    limpar_buffer();
    printf("Digite o PIB da cidade:\n");
    scanf("%f", &C2_pib); // Use %f para float
    limpar_buffer();
    printf("Digite o numero de pontos turisticos da cidade:\n");
    scanf("%d", &C2_numero_de_pontos_turisticos);
    limpar_buffer();

    // Eximindo os dados da 2ª carta
    printf("===================================\n");
    printf("Carta 2:\n");
    printf("Estado: %s\n", C2_Estado);
    printf("Codigo da carta: %s\n", C2_CodCarta);
    printf("Nome da cidade: %s\n", C2_cidade);
    printf("Populacao: %d\n", C2_populacao);
    printf("Area: %.2f\n km²", C2_area);
    printf("PIB: R$%.2f bilhões de reais\n", C2_pib);
    printf("Numero de pontos turisticos: %d\n", C2_numero_de_pontos_turisticos);
    printf("===================================\n");
    
    // Densidade Populacional e PIB per capita
    float C1_densidade_populacional = C1_populacao / C1_area;
    float C1_pib_per_capita = C1_pib / C1_populacao;
    float C2_densidade_populacional = C2_populacao / C2_area;
    float C2_pib_per_capita = C2_pib / C2_populacao;
    
    printf("Agora em relação as duas cartas, vamos analizar algumas coisas:\n");
    printf("Densidade Populacional da cidade da 1º carta: %.2f habitantes por km²\n", C1_densidade_populacional);
    printf("PIB per capita da cidade da 1º carta: R$%.2f\n", C1_pib_per_capita);
    printf("Densidade Populacional da cidade da 2ª carta: %.2f habitantes por km²\n", C2_densidade_populacional);
    printf("PIB per capita da cidade da 2ª carta: R$%.2f\n", C2_pib_per_capita);

    //Comparação de um atributo (População, Área, PIB, Densidade Populacional ou PIB per capita)
    if (C1_populacao > C2_populacao) {
    /*  Comparação de cartas (Atributo: População):
 
        Carta 1 - São Paulo (SP): 12.300.000

        Carta 2 - Rio de Janeiro (RJ): 6.000.000

        Resultado: Carta 1 (São Paulo) venceu!
    */
        printf("===========================================\n");
        printf("Comparação de cartas (Atributo: População):\n");
        printf("Carta 1 - %s: %d\n", C1_cidade, C1_populacao);
        printf("Carta 2 - %s: %d\n", C2_cidade, C2_populacao);
        printf("Resultado: Carta 1 (%s) venceu!\n", C1_cidade);
    } else if (C2_populacao > C1_populacao) {
        printf("==========================================\n");
        printf("Comparação de cartas (Atributo: População):\n");
        printf("Carta 1 - %s: %d\n", C1_cidade, C1_populacao);
        printf("Carta 2 - %s: %d\n", C2_cidade, C2_populacao);
        printf("Resultado: Carta 2 (%s) venceu!\n", C2_cidade);
    } else {
        printf("As duas cartas possuem a mesma população.\nEntão, vamos comparar os outros atributos.\n");
        if(C1_area > C2_area) {
            printf("===================================\n");
            printf("Comparação de cartas (Atributo: Área):\n");
            printf("Carta 1 - %s: %.2f\n", C1_cidade, C1_area);
            printf("Carta 2 - %s: %.2f\n", C2_cidade, C2_area);
            printf("Resultado: Carta 2 (%s) venceu!\n", C2_cidade);
        } else if (C2_area > C1_area) {
            printf("===================================\n");
            printf("Comparação de cartas (Atributo: Área):\n");
            printf("Carta 1 - %s: %.2f\n", C1_cidade, C1_area);
            printf("Carta 2 - %s: %.2f\n", C2_cidade, C2_area);
            printf("Resultado: Carta 2 (%s) venceu!\n", C2_cidade);
        } else {
            printf("As duas cartas possuem a mesma Área.\nEntão, vamos comparar os outros atributos.\n");
            if (C1_pib > C2_pib) {
                printf("===================================\n");
                printf("Comparação de cartas (Atributo: PIB):\n");
                printf("Carta 1 - %s: R$%.2f\n", C1_cidade, C1_pib);
                printf("Carta 2 - %s: R$%.2f\n", C2_cidade, C2_pib);
                printf("Resultado: Carta 1 (%s) venceu!\n", C1_cidade);
            } else if (C2_pib > C1_pib) {
                printf("===================================\n");
                printf("Comparação de cartas (Atributo: PIB):\n");
                printf("Carta 1 - %s: R$%.2f\n", C1_cidade, C1_pib);
                printf("Carta 2 - %s: R$%.2f\n", C2_cidade, C2_pib);
                printf("Resultado: Carta 2 (%s) venceu!\n", C2_cidade);
            } else {
                printf("As duas cartas possuem o mesmo PIB.\nEntão, vamos comparar os outros atributos.\n");
                if (C1_densidade_populacional < C2_densidade_populacional) {
                    printf("===================================\n");
                    printf("Comparação de cartas (Atributo: Densidade Populacional):\n");
                    printf("Carta 1 - %s: %.2f\n", C1_cidade, C1_densidade_populacional);
                    printf("Carta 2 - %s: %.2f\n", C2_cidade, C2_densidade_populacional);
                    printf("Resultado: Carta 1 (%s) venceu!\n", C1_cidade);
                } else if (C2_densidade_populacional < C1_densidade_populacional) {
                    printf("===================================\n");
                    printf("Comparação de cartas (Atributo: Densidade Populacional):\n");
                    printf("Carta 1 - %s: %.2f\n", C1_cidade, C1_densidade_populacional);
                    printf("Carta 2 - %s: %.2f\n", C2_cidade, C2_densidade_populacional);
                    printf("A cidade da 2ª carta tem a menor Densidade Populacional.\n");}
                    printf("Resultado: Carta 2 (%s) venceu!\n", C2_cidade);
            }
        }
    }
    

    //Determinando vencedor 
    //Comparação de todos os atributos 
    if (C1_populacao > C2_populacao) {
        C1_pontos++;
    } else if (C2_populacao > C1_populacao) {
        C2_pontos++;
    } else {
        C1_pontos++;
        C2_pontos++;
    }
    if (C1_area > C2_area) {
        C1_pontos++;
    } else if (C2_area > C1_area) {
        C2_pontos++;
    } else {
        C1_pontos++;
        C2_pontos++;
    }
    if (C1_pib > C2_pib) {
        C1_pontos++;
    } else if (C2_pib > C1_pib) {
        C2_pontos++;
    } else {
        C1_pontos++;
        C2_pontos++;
    }
    if (C1_densidade_populacional < C2_densidade_populacional) {
        C1_pontos++;
    } else if (C2_densidade_populacional < C1_densidade_populacional) {
        C2_pontos++;
    } else {
        C1_pontos++;
        C2_pontos++;
    }
    if (C1_pib_per_capita > C2_pib_per_capita) {
        C1_pontos++;
    } else if (C2_pib_per_capita > C1_pib_per_capita) {
        C2_pontos++;
    } else {
        C1_pontos++;
        C2_pontos++;
    }
    if (C1_numero_de_pontos_turisticos > C2_numero_de_pontos_turisticos) {
        C1_pontos++;
    } else if (C2_numero_de_pontos_turisticos > C1_numero_de_pontos_turisticos) {
        C2_pontos++;
    } else {
        C1_pontos++;
        C2_pontos++;
    }
    
    if (C1_pontos > C2_pontos) {
        printf("A cidade da 1º carta foi o vencedor!\n");
    } else if (C2_pontos > C1_pontos) {
        printf("A cidade da 2ª carta foi o vencedor!\n");
    } else {
        printf("As duas cartas empataram!\n");
    }

    printf("Fim do jogo\n");
    return 0;
}