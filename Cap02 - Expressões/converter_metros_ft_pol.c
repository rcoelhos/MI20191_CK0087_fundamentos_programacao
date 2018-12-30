/* Programa para converter altura em metros para ft e pol */

#include <stdio.h>

int main (void)
{
  int foot;         /* número de pés */
  float polegadas;  /* número de polegadas */
  float metros;     /* altura em metros */

  /* Captura altura em metros */
  printf("Digite altura em metros: ");
  scanf("%f", &metros);

  /* Calcula altura em pés e polegadas */
  metros = 100 * metros;                    /* converte para centímetros */
  foot = (int) (metros / 30.48);            /* calcula número de pés */
  polegadas = (metros - foot*30.48) / 2.54  /* calcula número de polegadas do restante */

  /* Exibe altura convertida */
  printf("Altura convertida: $dft %.2fpol\n", foot, polegada);

  return 0;
}
