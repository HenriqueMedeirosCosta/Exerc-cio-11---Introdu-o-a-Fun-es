#include <stdio.h>
#include<math.h>

float calcularImc();
void situacao();

main(){
    float altura, peso, imc;
    printf("Digite o peso e a altura:\n");
    scanf("%f %f", &peso, &altura);
  
    imc = calcularImc(peso, altura); */
    situacao();
}
float calcularImc(){
  float alt, peso;
  printf("Digite o peso e a altura:\n");
  scanf("%f %f", &peso, &alt);
  float imc = peso / pow(alt, 2);
  return imc;
}
void situacao(){
  float imc = calcularImc();
  printf("Imc = %.2f\n", imc);
  if(imc < 16){
    printf("Abaixo do peso");
  
  }else if(imc >= 16 && imc < 25){
    printf("Peso Normal");
    
  }else{
    printf("Acima do peso");
  }
    
}
