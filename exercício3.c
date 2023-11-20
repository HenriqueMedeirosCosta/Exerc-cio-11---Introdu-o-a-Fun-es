#include <stdio.h>
#include<math.h>
float convertCelsius(float valorF);

main() {

  float valorF, valorC;

  printf("Digite a temperatura em Fahrenheit: ");
  scanf("%f", &valorF);

  valorC = convertCelsius(valorF);

  printf("A temperatura em celsius é: %.2f", valorC);
}

float convertCelsius(float valorF){
  float celsius = (valorF - 32) * 5/9; 

  return celsius;
}
