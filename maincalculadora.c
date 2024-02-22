#include <stdio.h>
#include <math.h>

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
          //logica de cada uno
        break;
        case 6:
          //logica de cada uno
        break;
    default:
    printf("OPCION INVALIDA\n");
  }
return 0;
}
