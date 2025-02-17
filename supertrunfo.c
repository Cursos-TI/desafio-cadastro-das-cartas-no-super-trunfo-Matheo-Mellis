#include <stdio.h>

//Cadastro das cartas e atributos
int main(){
    int populacao, pt, cd;
    float area, PIB;
    char nome[50];

    printf("Digite o nome da cidade: ");
    scanf("%s", &nome);

    printf("Digite a populacao da cidade: ");
    scanf("%d", &populacao);

    printf("Digite a area da cidade: ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB);

    printf("Digite o numero de pontos de turismo da cidade: ");
    scanf("%d", &pt);

    printf("Sua carta é: %s\n", nome);
    printf("Sua populaçao é de: %d\n", populacao);
    printf("Sua area é de: %f\n", area);
    printf("Seu PIB é de: %f\n", PIB);
    printf("Seu numero de pontos turisticos é de: %d\n", pt);

    return 0;
    
}


