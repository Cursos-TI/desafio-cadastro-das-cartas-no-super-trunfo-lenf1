#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;

  #include <stdio.h> 
int main() {
    // Declaração de variáveis (dados de uma cidade em Alagoas)
    char Estado[] = "Alagoas";
    char Codigo_da_carta[] = "AL1";
    char Nome_da_Cidade[] = "Arapiraca";
    int Populacao = 234696;
    float Area_km2 = 351.0;
    double PIB = 5915937693.00;
    int Pontos_Turisticos = 10;

    // Impressão dos dados armazenados
    printf("Estado: %s\n", Estado);
    printf("Codigo da carta: %s\n", Codigo_da_carta);
    printf("Cidade: %s\n", Nome_da_Cidade);
    printf("Populacao: %d\n", Populacao);
    printf("Area: %.2f km²\n", Area_km2);
    printf("PIB: %.2lf\n", PIB);
    printf("Numero de pontos turisticos: %d\n", Pontos_Turisticos);

    return 0; //
}