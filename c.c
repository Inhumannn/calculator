#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

float add(float a, float b)
{
  return a + b;
}

float sub(float a, float b)
{
  return a - b;
}

float mul(float a, float b)
{
  return a * b;
}

float divv(float a, float b)
{
  return a / b;
}


int main(void)
{
  float op1;
  float op2;
  char operateur;
  float result;
  char rep[3];
  bool isEnd = false;
  
  printf("Veuillez taper votre opération : ");
  scanf("%f %c %f", &op1, &operateur, &op2);
  
  do {
    if( operateur == '+' ) result = add(op1, op2);
    if( operateur == '-' ) result = sub(op1, op2);
    if( operateur == '*' ) result = mul(op1, op2);
    if( operateur == '/' )
    {
      if( op2 == 0 )
      {
        printf("Erreur : division par 0 !");
        break;
      }
      result = divv(op1, op2);
    } 
    printf("%.2f\n", result);

    printf("Voulez vous rentrez un autre calcul avec votre résultat précédent : oui ? non ? -> ");
    scanf("%s", rep);

    isEnd = (strcmp(rep, "oui") == 0) ? true : false;
    if (isEnd == true) 
    {
      op1 = result;
      printf("Veuillez taper votre opération : %.2f ", op1);
      scanf(" %c %f", &operateur, &op2);
    }

  } while(isEnd);
  return 0;
}