#include <stdio.h>

int main (int argc, char *argv[]) {
    float n1, n2, promedio;
    int asistencia;
    printf ("Ingrese la nota 1: ");
    scanf("%f", &n1);

    printf("Ingrese la nota 2: ");
    scanf("%f",&n2);

    printf("Ingrese la asistencia: ");
    scanf("%d",&asistencia);

    promedio=(n1+n2)/2;
    printf("El promedio es: %f",promedio);

    if (promedio>=6)
    {
        printf("Aprobado");
    }else if (asistencia>=80)
    {
        printf("Recuperacion");
    }else{
        printf("Reprueba");
    }
   if (promedio>=0 &&promedio<=3){
    printf("Insuficiente");
   }else if (promedio>=3 && promedio<=5)
   {
    printf("Regular");
   }
   else if (promedio>=5 && promedio<=7)
   {
    printf("Bueno");
   }
   else if (promedio>=7 && promedio<=9)
   {
    printf("Muy bueno");
   }
   else if (promedio>=9 && 10)
   {
    printf("Excelente");
   }
   
    return 0;
}