#include <stdio.h>
#include <math.h>

int main (int argc, char *argv[]) {

    int opc;

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
    scanf("%d",&opc);
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