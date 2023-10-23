#include <stdio.h>

int main() {
  float nota1, nota2;
  float media;

  printf("Digite a primeira nota: ");
  scanf("%f", & nota1);
  while (nota1 > 10 || nota1 < 0) {
    printf("Nota 1 inválida: ");
    scanf("%f", & nota1);
  }
  printf("Digite a segunda nota: ");
  scanf("%f", & nota2);
  while (nota2 > 10 || nota2 < 0) {
    printf("Nota 2 inválida: ");
    scanf("%f", & nota2);
  }

  media = (nota1 + nota2) / 2;

  printf("%.2f", media);

  return 0;
}