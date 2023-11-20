#include <stdio.h>
#include<math.h>
 
void volumeE(double);

main() {

  //5

  volumeE(5.0);
}

void volumeE(double raio){
  double pi = 3.1415;
  double volume = (4/3) * pi * pow(raio, 3); 
  printf("O volume da esfera é: %.2f", volume);
}
