//Libreria
#include <stdio.h>

//Macro
#define PI 3.1416
//Variables glocbales
int num1;
int num2;
int numTabla;
int seleccionMenu;

void suma() {
    printf("Digite un numero: \n");
    scanf("%i", &num1);
    printf("Digite otro numero: \n");
    scanf("%i", &num2);
    printf("El resultado de los dos numeros es: %i\n", num1 + num2);
}

void resta() {
    printf("Digite un numero: \n");
    scanf("%i", &num1);
    printf("Digite otro numero: \n");
    scanf("%i", &num2);
    printf("El resultado de la resta es: %i\n", num1 - num2);
}

void multiplicacion() {
    printf("Digite un numero: \n");
    scanf("%i", &num1);
    printf("Digite otro numero: \n");
    scanf("%i", &num2);
    printf("El resultado de la multiplicacion es: %i\n", num1 * num2);
}

void division() {
    printf("Digite un numero: \n");
    scanf("%i", &num1);
    printf("Digite otro numero: \n");
    scanf("%i", &num2);
    printf("EL resultado de la division es: %i\n", num1 / num2);
}

void tablaMultiplicar() {
    printf("Digite el numero de la tabla que desea generar: \n");
    scanf("%i", &numTabla);
    printf("Tabla del numero: %i\n", numTabla);
    for (int i = 1; i < 11; ++i) {
        printf("%i*%i=%i \n", numTabla, i, numTabla * i);
    }
}


int main() {

    /* //Tipos de datos
     printf("--------------------------------------------------\n");
     printf("****** Tipos de datos ******\n");

     char Char = 'e';
     printf("El caracter es: %c \n",Char);

     short Short = -10;
     printf("El valor del short es: %i \n",Short);

     int Int = 12;
     printf("El valor del entero es %i \n",Int);

     unsigned int  IntPositivo = 142;
     printf("El valor del entero positivo es: %i \n",IntPositivo);

     long Long = 123456;
     printf("El valor de long es: %li\n",Long);

     float Float = 15.888;
     printf("El valor del float es: %.3f \n",Float);

     double Double = 7894.458745;
     printf("El valor del double es: %lf \n",Double );

     printf("--------------------------------------------------\n");
 */


    //Entrada y salida  de datos -- Operaciones logicas


    printf("Que desea hacer: \n1. Sumar \n2. Restar \n3. Multiplicar \n4. Dividir \n5. Tablas de multiplicacion \n");
    scanf("%i", &seleccionMenu);

    if (seleccionMenu == 1) {
        printf("----SUMA----\n");
        suma();
    }
    if (seleccionMenu == 2) {
        printf("----RESTA----\n");
        resta();
    }
    if (seleccionMenu == 3) {
        printf("----MULTIPLICACION----\n");
        multiplicacion();

    }
    if (seleccionMenu == 4) {
        printf("----DIVISION----\n");
        division();
    }
    if (seleccionMenu == 5) {
        printf("----TABLAS DE MULTIPLICAR----\n");
        tablaMultiplicar();
    }
    if (seleccionMenu <= 0 || seleccionMenu > 5) {
        printf("---------------------------------------------------------\n");
        printf("Seleccione una opcion valida\n");
        printf("---------------------------------------------------------\n");
    }


    return 0;

}


