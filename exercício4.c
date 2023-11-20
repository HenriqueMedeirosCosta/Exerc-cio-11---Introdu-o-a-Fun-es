#include <stdio.h>
#include<math.h>

double volumeC(double, double); 

main() {

  double altura = 2, raio = 1;
  double volume = volumeC(altura, raio);
  printf("Volume de cilindro: %.1f", volume); 

}

double volumeC(double alt, double raio){
  double pi = 3.1415;
  double volume = pi * pow(raio, 2) * alt;

  return volume;
}
