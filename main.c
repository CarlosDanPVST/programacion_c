#include <iso646.h>
#include <stdio.h>

int main() {
 // Comentarios de una línea
 /*
  * Comentario de varias líneas
  */
 printf("Es dificil, pero trabajar con los proyectos\n");

 /*
  * Variables
  * Se pueden declarar e inicializar juntas o separadas. Recordemos que
  * no podemos usar carácteres especiales mas que _
  * tipoDato identificador = valor;
  */
 int x = 64;
 float pi = 3.14159;
 char letraA = 'A';
 char numeroA = 65;
 char nombre[] = "Carlos";
 const int constante = 10;

 /*
  * Para imprimir debemos usamos la función de stdio.h
  * printf("%specifiers", replacements);
  *
  */
 printf("Hola, mi nombre es %s y tomo pi como %f\n", nombre, pi);
 printf("%c %c\n", numeroA, letraA);

 /*
  * Tipos de datos
  *
  * char        08 bits
  * arrays[]
  * short _int_ 16 bits int kw can be skipped
  * int         32 bits
  * long        64 bits
  * float       32 bits
  * double      64 bits
  * bool        08 bits Requires stdbool.h
  *
  * unsigned            Gives numbers a range starting from 0
  */
 unsigned char notOFInt = 255;
 signed char overFlowInt = 130;
 printf("255/%d 130/%d\n", notOFInt, overFlowInt);
 printf("Real number is: %d\n", overFlowInt+ 256);

 /*
  * Operators
  *
  */

 return 0;
}
