#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int add(int a, int b)
{
  return a + b;
}

int sub(int a, int b)
{
  return a - b;
}

int mul(int a, int b)
{
  return a * b;
}

int divv(int a, int b)
{
  return a % b;
}


int main(void)
{
  int number = 1;
  int *numberList = NULL;
  int i;
  bool isEnd = false;
  char rep[10];

  numberList = calloc(number, sizeof(int) * number);
  if ( numberList == NULL ) exit( 1 );
  
  for ( i = 0 ; i < number ; i++ )
  {
    printf("Nombre %d\n", i);
    numberList[i];
  }
  do {
    printf("Veuillez rentree votre premier nombre : ")
    scanf(i)
    printf("Voulez vous rentrez un autre nombre ? oui ? non ? ");
    scanf("%s", rep);
    isEnd = (strcmp(rep, "oui") == 0) ? true : false;
    if (isEnd == false) {
      
    }
  } while(isEnd);

  return 0;
}