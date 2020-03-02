#include <stdio.h>

float calculaArea(float a, float b){
  return a*b;
}
float calculaPerimetro(float a, float b){
  return 2*a + 2*b;
}
void mostraMensagem(char *msg, float vlr){
  printf("%s %5.2f", msg, vlr);
}

int main(){
  float altura, largura, area, perimetro;

  printf("Digite o valor da altura do retangulo: ");
  scanf("%f%*c", &altura);
  printf("Digite o valor da largura do retangulo: ");
  scanf("%f%*c", &largura);
  area = calculaArea(altura, largura);
  perimetro = calculaPerimetro(altura, largura);
  mostraMensagem("O valor da área é ", area);
  mostraMensagem("O valor do perímetro é ", perimetro);
  return 0;
}