#include <stdio.h>

int main() {

    char pais[20], A[20], B[20], C[20], D[20], E[20], F[20], G[20], H[20];
    char A1[20], A2[20], A3[20], A4[20], B1[20], B2[20], B3[20], B4[20], C1[20], C2[20], C3[20], C4[20], D1[20], D2[20], D3[20], D4[20], E1[20], E2[20], E3[20], E4[20], F1[20], F2[20], F3[20], F4[20], G1[20], G2[20], G3[20], G4[20], H1[20], H2[20], H3[20], H4[20];
    int populacao, pTuristico;
    float area, pib;


    //escolha do país
    printf("Bem vindo ao Super Trunfo Países!!\n");
    printf("Digite o nome do País de sua preferência para iniciarmos: \n");
    scanf("%s", pais);
    printf("Você escolheu: %s\n", pais);

    //escolha dos estados
    printf("Agora selecione 8 estados que deseja do País escolhido: \n");
    scanf("%s %s %s %s %s %s %s %s", A, B, C, D, E, F, G, H);
    printf(" %s %s %s %s %s %s %s %s\n", A, B, C, D, E, F, G, H);
    printf("Perfeito! \n");

    //escolha das cidades e seus atributos
    printf("Agora selecione 4 cidades para cada estado e insira suas informações solicitadas: \n");
    printf("Começando com: %s\n", A);
    scanf(" %s %s %s %s", A1, A2, A3, A4);

    printf("Agora com: %s\n", B);
    scanf("%s %s %s %s", B1, B2, B3, B4);
    printf("Agora com: %s\n", C);
    scanf("%s %s %s %s", C1, C2, C3, C4);
    printf("Agora com: %s\n", D);
    scanf("%s %s %s %s", D1, D2, D3, D4);
    printf("Agora com: %s\n", E);
    scanf("%s %s %s %s", E1, E2, E3, E4);
    printf("Agora com: %s\n", F);
    scanf("%s %s %s %s", F1, F2, F3, F4);
    printf("Agora com: %s\n", G);
    scanf("%s %s %s %s", G1, G2, G3, G4);
    printf("Agora com: %s\n", H);
    scanf("%s %s %s %s", H1, H2, H3, H4); 
    

    printf("Agora, vamos aos atributos de cada cidade: \n");
    printf("Começando por %s\n", A1);
    printf("Digite em ordem as seguintes informações: População, Área, PIB e Pontos turísticos: \n");
    scanf(" %d %f %f %d", &populacao, &area, &pib, &pTuristico);
    printf("%d %f %f %d\n", populacao, area, pib, pTuristico);

    printf("Agora com: %s\n", A2);
    scanf("%d %f %f %d", &populacao, &area, &pib, &pTuristico);
    printf("%d %f %f %d\n", populacao, area, pib, pTuristico);
    printf("Agora com: %s\n", A3);
    scanf("%d %f %f %d", &populacao, &area, &pib, &pTuristico);
    printf("%d %f %f %d\n", populacao, area, pib, pTuristico);
    printf("Agora com: %s\n", A4);
    scanf("%d %f %f %d", &populacao, &area, &pib, &pTuristico);
    printf("%d %f %f %d\n", populacao, area, pib, pTuristico);
    
    
    printf("Agora com: %s\n", B1);
    scanf("%d %f %f %d", &populacao, &area, &pib, &pTuristico);
    printf("%d %f %f %d\n", populacao, area, pib, pTuristico);
    printf("Agora com: %s\n", B2);
    scanf("%d %f %f %d", &populacao, &area, &pib, &pTuristico);
    printf("%d %f %f %d\n", populacao, area, pib, pTuristico);
    printf("Agora com: %s\n", B3);
    scanf("%d %f %f %d", &populacao, &area, &pib, &pTuristico);
    printf("%d %f %f %d\n", populacao, area, pib, pTuristico);
    printf("Agora com: %s\n", B4);
    scanf("%d %f %f %d", &populacao, &area, &pib, &pTuristico);
    printf("%d %f %f %d\n", populacao, area, pib, pTuristico);

    printf("Agora com: %s\n", C1);
    scanf("%d %f %f %d", &populacao, &area, &pib, &pTuristico);
    printf("%d %f %f %d\n", populacao, area, pib, pTuristico);
    printf("Agora com: %s\n", C2);
    scanf("%d %f %f %d", &populacao, &area, &pib, &pTuristico);
    printf("%d %f %f %d\n", populacao, area, pib, pTuristico);
    printf("Agora com: %s\n", C3);
    scanf("%d %f %f %d", &populacao, &area, &pib, &pTuristico);
    printf("%d %f %f %d\n", populacao, area, pib, pTuristico);
    printf("Agora com: %s\n", C4);
    scanf("%d %f %f %d", &populacao, &area, &pib, &pTuristico);
    printf("%d %f %f %d\n", populacao, area, pib, pTuristico);

    printf("Agora com: %s\n", D1);
    scanf("%d %f %f %d", &populacao, &area, &pib, &pTuristico);
    printf("%d %f %f %d\n", populacao, area, pib, pTuristico);
    printf("Agora com: %s\n", D2);
    scanf("%d %f %f %d", &populacao, &area, &pib, &pTuristico);
    printf("%d %f %f %d\n", populacao, area, pib, pTuristico);
    printf("Agora com: %s\n", D3);
    scanf("%d %f %f %d", &populacao, &area, &pib, &pTuristico);
    printf("%d %f %f %d\n", populacao, area, pib, pTuristico);
    printf("Agora com: %s\n", D4);
    scanf("%d %f %f %d", &populacao, &area, &pib, &pTuristico);
    printf("%d %f %f %d\n", populacao, area, pib, pTuristico);

    printf("Agora com: %s\n", E1);
    scanf("%d %f %f %d", &populacao, &area, &pib, &pTuristico);
    printf("%d %f %f %d\n", populacao, area, pib, pTuristico);
    printf("Agora com: %s\n", E2);
    scanf("%d %f %f %d", &populacao, &area, &pib, &pTuristico);
    printf("%d %f %f %d\n", populacao, area, pib, pTuristico);
    printf("Agora com: %s\n", E3);
    scanf("%d %f %f %d", &populacao, &area, &pib, &pTuristico);
    printf("%d %f %f %d\n", populacao, area, pib, pTuristico);
    printf("Agora com: %s\n", E4);
    scanf("%d %f %f %d", &populacao, &area, &pib, &pTuristico);
    printf("%d %f %f %d\n", populacao, area, pib, pTuristico);

    printf("Agora com: %s\n", F1);
    scanf("%d %f %f %d", &populacao, &area, &pib, &pTuristico);
    printf("%d %f %f %d\n", populacao, area, pib, pTuristico);
    printf("Agora com: %s\n", F2);
    scanf("%d %f %f %d", &populacao, &area, &pib, &pTuristico);
    printf("%d %f %f %d\n", populacao, area, pib, pTuristico);
    printf("Agora com: %s\n", F3);
    scanf("%d %f %f %d", &populacao, &area, &pib, &pTuristico);
    printf("%d %f %f %d\n", populacao, area, pib, pTuristico);
    printf("Agora com: %s\n", F4);
    scanf("%d %f %f %d", &populacao, &area, &pib, &pTuristico);
    printf("%d %f %f %d\n", populacao, area, pib, pTuristico);

    printf("Agora com: %s\n", G1);
    scanf("%d %f %f %d", &populacao, &area, &pib, &pTuristico);
    printf("%d %f %f %d\n", populacao, area, pib, pTuristico);
    printf("Agora com: %s\n", G2);
    scanf("%d %f %f %d", &populacao, &area, &pib, &pTuristico);
    printf("%d %f %f %d\n", populacao, area, pib, pTuristico);
    printf("Agora com: %s\n", G3);
    scanf("%d %f %f %d", &populacao, &area, &pib, &pTuristico);
    printf("%d %f %f %d\n", populacao, area, pib, pTuristico);
    printf("Agora com: %s\n", G4);
    scanf("%d %f %f %d", &populacao, &area, &pib, &pTuristico);
    printf("%d %f %f %d\n", populacao, area, pib, pTuristico);

    printf("Agora com: %s\n", H1);
    scanf("%d %f %f %d", &populacao, &area, &pib, &pTuristico);
    printf("%d %f %f %d\n", populacao, area, pib, pTuristico);
    printf("Agora com: %s\n", H2);
    scanf("%d %f %f %d", &populacao, &area, &pib, &pTuristico);
    printf("%d %f %f %d\n", populacao, area, pib, pTuristico);
    printf("Agora com: %s\n", H3);
    scanf("%d %f %f %d", &populacao, &area, &pib, &pTuristico);
    printf("%d %f %f %d\n", populacao, area, pib, pTuristico);
    printf("Agora com: %s\n", H4);
    scanf("%d %f %f %d", &populacao, &area, &pib, &pTuristico);
    printf("%d %f %f %d\n", populacao, area, pib, pTuristico);
    
    return 0;
}
