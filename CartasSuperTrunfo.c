#include <stdio.h>

int main(){
char estado1[14];
char codigo1[4];
char cidade1[19];
int populacao1;
float area1;
float pib1;
int pontos;

printf("estado carta 1 :");
scanf("%s", estado1);


printf("codigo carta 1: ");
scanf("%s", codigo1);


printf("cidade carta 1: ");
scanf("%s", cidade1);

printf("populacao carta 1: ");
scanf("%d",&populacao1);


printf(" area carta 1: ");
scanf("%f", &area1);


printf("pib carta 1: ");
scanf("%f", &pib1);


printf("pontos turisticos carta 1:");
scanf("%d",&pontos);


printf("estado da carta 1 é: %s\n", estado1);
printf("codigo da carta 1 é: %s\n", codigo1);
printf("cidade da carta 1 é: %s\n", cidade1);
printf("a população da carta 1 é: %d\n", populacao1);
printf("area da carta 1 é: %.4f\n", area1);
printf("pib da carta 1 é: %.4f\n", pib1);
printf("os pontos turisticos da carta 1 são: %d\n", pontos);


printf("\n==============================\n");
printf("        CARTA 2\n");
printf("==============================\n\n");



char estado2[14];
char codigo2[4];
char cidade2[19];
int populacao2;
float area2;
float pib2;
int pontos2;

printf("estado carta 2  :\n");
scanf("%s", estado2);


printf("codigo carta 2: \n");
scanf("%s", codigo2);


printf("cidade carta 2: \n");
scanf("%s", cidade2);


printf("populacao carta 2: \n");
scanf("%d",&populacao2);

printf(" area carta 2: \n");
scanf("%f", &area2);


printf("pib carta 2: \n");
scanf("%f", &pib2);


printf("pontos turisticos carta 2:\n");
scanf("%d",&pontos2);

printf("estado da carta 2 é: %s\n", estado2);
printf("codigo da carta 2 é: %s\n", codigo2);
printf("cidade da carta 2 é: %s\n", cidade2);
printf("a população da carta 2 é: %d\n", populacao2);
printf("area da carta 2 é: %.4f\n", area2);
printf("pib da carta 2 é: %.4f\n", pib2);
printf("os pontos turisticos da carta 2 são: %d\n", pontos2);



return 0;

}