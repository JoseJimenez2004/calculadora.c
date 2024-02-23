#include <stdio.h>
#include <math.h>
#include <wchar.h>

int validacion_factorial();
int factorial(int);

int main(){
  int opc;
  float divi(float num1,float num2);
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
            	printf("Ingresa el primer numero: ");
            	scanf("%f", &num1);
            	printf("Ingresa el segundo numero: ");
            	scanf("%f", &num2);
            		resultado = num1 + num2;
            	printf("La suma es: %.2f\n", resultado);
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
            	printf("\n\nIngrese el primer numero:\t");
	        scanf("%f",&num1);
	        printf("\n\nIngrese el segundo numero:\t");
	        scanf("%f",&num2);
	        	div=divi(num1,num2);
	        printf("\n\nLa division del numero %.3f y el numero %.3f es:\t%.3f \n\n",a,b,div);
        break;
        case 4:
          //logica de cada uno
        break;
        case 5:
          	printf("El resultado es: %i\n", factorial(validacion_factorial()));
        break;
        case 6:
          	printf("\n\nIngrese un numero para calcular su raiz cuadrada:\t");
                	scanf("%f", &num);
         		if (num < 0) {
				printf("\nNo se puede calcular la raiz cuadrada de un numero negativo.\n");
       			} else
       			{
        			float raiz = sqrt(num);
			        printf("\nLa raiz cuadrada de %.3f es:\t%.3f \n\n", num, raiz);
		
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
