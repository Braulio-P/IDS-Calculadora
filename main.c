#include <stdio.h>

int main ()
{
    int num1,num2;

    printf ("Bienvenido a la calculadora que MULTIPLICA");
    printf ("\n Dame el primer numero a multiplicar: ");
    scanf("%d",&num1);

     printf ("\n Dame el segundo numero a multiplicar:");
    scanf("%d",&num2);

    int resultado = num1*num2;

     printf ("\n El resultado de la multiplicacion es: %d",resultado);
    return 0;

}

