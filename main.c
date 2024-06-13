#include <stdio.h>

int main ()
{
    int num1,num2;

    printf ("Bienvenido a la calculadora que DIVIDE");
    printf ("\n Dame el primer numero a dividir: ");
    scanf("%d",&num1);

     printf ("\n Dame el segundo numero a dividir:");
    scanf("%d",&num2);

    int resultado = num1+num2;

     printf ("\n El resultado de la division es: %d",resultado);
    return 0;

}