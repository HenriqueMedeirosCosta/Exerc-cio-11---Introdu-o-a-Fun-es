#include <stdio.h>
#include <string.h>

void mes(int n1);

main() {

  
   int numero1;

  printf("\nDigite um numero de 1 a 12:\n");
  scanf("%d", &numero1);
  int retornoFuncao = mes(numero1);
  
}
void mes(int n1) {
  char mes[10];
  int dias;
  switch (n1) {
  case 1: case 3: case 5: case 7: case 8: case 10: case 12:
    dias = 31;
    if (n1 == 1) {
      strcpy(mes, "Janeiro");
    } else if (n1 == 3) {
      strcpy(mes, "Março");
    } else if (n1 == 5) {
      strcpy(mes, "Maio");
    } else if (n1 == 7) {
      strcpy(mes, "Julho");
    } else if (n1 == 8) {
      strcpy(mes, "Agosto");
    } else if (n1 == 10) {
      strcpy(mes, "Outubro");
    } else if (n1 == 12) {
      strcpy(mes, "Dezembro");
    }
    break;
  case 2:
    dias = 28;
    strcpy(mes, "Fevereiro");
    break;
  case 4: case 6: case 9: case 11:
    dias = 30;
    if (n1 == 4) {
      strcpy(mes, "Abril");
    } else if (n1 == 6) {
      strcpy(mes, "Junho");
    } else if (n1 == 9) {
      strcpy(mes, "Setembro");
    } else if (n1 == 11) {
      strcpy(mes, "Novembro");
    }
    break;

  default:
    printf("Numero invalido");
  }

  printf("O mes %s tem %d dias", mes, dias);
}
