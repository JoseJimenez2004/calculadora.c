#include <stdio.h>
#include <math.h>
#include <wchar.h>

int validacion_factorial();
int factorial(int);

int main(){
  int opc;
  float num1, num2, resultado;
  printf("Bienvenidos a la calculadora\n");
  printf("Selecciona una opcion: \n");
  printf("1. Suma\n");
  printf("2. Resta\n");
  printf("3. Multiplicación\n");
  printf("4. División\n");
  printf("5. Factorial\n");
  printf("6. Raíz cuadrada\n");
  scanf("%d", &opc);
  switch(opc) {
        case 1:
          //logica de cada uno
        break;
        case 2:
          printf("Bienvenido a la parte de la Resta\n");
          printf("Ingrese el primer numero: ");
          scanf("%f", &num1);
          printf("Ingrese el segundo numero: ");
          scanf("%f", &num2);
            resultado= num1-num2;
            printf("El resultado de la resta es: %.2f\n",resultado);
        break;
        case 3:
          //logica de cada uno
        break;
        case 4:
          //logica de cada uno
        break;
        case 5:
          printf("El resultado es: %i\n", factorial(validacion_factorial()));
        break;
        case 6:
          //logica de cada uno
        break;
    default:
    printf("OPCION INVALIDA\n");
  }
return 0;
}

int validacion_factorial(){
  int num;
  puts("Hola usuario!");
  puts("Se le solicita digitar un numero natural al que quiera calcular su factorial: ");
  scanf("%i", &num);

  while (num < 0){
    puts("NUmero no valido, intetelo de nuevo:");
    scanf("%i", &num);
  }

  return num;
}

int factorial(int num){
  if(num == 0)
    return(1);
  else if(num == 1)
    return(num);
  else
    return(num * factorial(num - 1));
}