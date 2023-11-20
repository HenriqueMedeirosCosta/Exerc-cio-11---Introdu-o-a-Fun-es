#include <stdio.h>
#include <string.h>
// Prototipo de função

int maior(int n1, int n2);


main() {
  

  int numero1, numero2;
  

  // 1
  printf("Digite dois numeros:");
  scanf("%d %d", &numero1, &numero2);
  int retornoFuncao = maior(numero1, numero2);
  printf("o maior da função é: %d", retornoFuncao);
  
}


int maior(int n1, int n2) {
  int maior;
  if (n1 > n2) {
    maior = n1;
  } else {
    maior = n2;
  }
  return maior;
}
