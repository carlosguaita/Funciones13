#include <stdio.h>
#include <math.h>

int menu();
float suma(float a, float b);
float resta(float a, float b);
float multiplicacion(float a, float b);
float division(float a, float b);
float potenciacion(float a, float b);
float raizCuadrada(float a);
float leerFlotante();
int leerEnteroConRango(int a, int b);

int main (int argc, char *argv[]) {

    int opc;
    float n1, n2, res;

    do
    {

        opc = menu();

        switch (opc)
        {
        case 1:
            printf("Ingrese el numero 1: ");
            n1 = leerFlotante();
            printf("Ingrese el numero 2: ");
            n2 = leerFlotante();
            res = suma(n1, n2);
            printf("El resultado es: %.2f\n", res);
            break;
        case 2:
            printf("Ingrese el numero 1: ");
            n1 = leerFlotante();
            printf("Ingrese el numero 2: ");
            n2 = leerFlotante();
            res = resta(n1, n2);
            printf("El resultado es: %.2f\n", res);
            break;
        case 3:
            printf("Ingrese el numero 1: ");
            n1 = leerFlotante();
            printf("Ingrese el numero 2: ");
            n2 = leerFlotante();
            res = multiplicacion(n1, n2);
            printf("El resultado es: %.2f\n", res);
            break;
        case 4:
            printf("Ingrese el numero 1: ");
            n1 = leerFlotante();
            printf("Ingrese el numero 2: ");
            n2 = leerFlotante();
            res = division(n1, n2);
            printf("El resultado es: %.2f\n", res);
            break;
        case 5:
            printf("Ingrese el numero 1: ");
            n1 = leerFlotante();
            printf("Ingrese el numero 2: ");
            n2 = leerFlotante();
            res = potenciacion(n1, n2);
            printf("El resultado es: %.2f\n", res);
            break;
        case 6:
            printf("Ingrese el numero 1: ");
            n1 = leerFlotante();
            res = raizCuadrada(n1);
            printf("El resultado es: %.2f\n", res);
            break;

        default:
            break;
        }

        printf("Desea seleccionar otra opcion 1.Si/2.No: ");
        scanf("%d", &opc);

    } while (opc == 1);

    return 0;
}

int menu(){
    int opc;
    printf("Seleccione una opcion:\n");
    printf("1.Suma\n");
    printf("2.Resta\n");
    printf("3.Multiplicacion\n");
    printf("4.Division\n");
    printf("5.Potenciacion\n");
    printf("6.Raiz cuadrada\n");
    printf(">> ");
    opc = leerEnteroConRango(1,6);
    return opc;
}

float suma(float a, float b){
    float res;
    res = a + b;
    return res;
}

float resta(float a, float b){
    float res;
    res = a - b;
    return res;
}

float multiplicacion(float a, float b){
    float res; 
    res = a * b;
    return res;
}

float division(float a, float b){
    float res = 0;
    if (b == 0){
        printf("Error: no se puede dividir para cero\n");
    }else{
        res = a / b;
    }
    return res;
}

float potenciacion(float a, float b){
    float res = 0;
    if (a == 0 && b <=0){
        printf("Error: Indeterminado\n");
    }else{
        res = pow(a,b);
    }
    return res;
}

float raizCuadrada(float a){
    float res = 0;
    if (a < 0){
        printf("Error: el numero no puede ser negativo\n");
    }else{
        res = sqrt(a);
    }
    return res;
}

float leerFlotante(){
    int aux;
    float n;  
    do{
        getchar();
        aux = scanf("%f",&n);
        if (aux != 1){
            printf("El valor ingresado es incorrecto\n");
        }
    }while (aux != 1);
    return n;
}

int leerEnteroConRango(int a, int b){
    int aux;
    int n;  
    do{
        getchar();
        aux = scanf("%d",&n);
        if (aux != 1 || n < a || n > b){
            printf("El valor ingresado es incorrecto\n");
        }
    }while (aux != 1 || n < a || n > b);
    return n;
}