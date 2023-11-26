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
  * Los specifiers son
  * %c    character
  * %s    array of characters
  * %d    int
  * %ld   long _int_
  * %f    float
  * %lf   double
  *
  * %.n   Precisión decimal
  * %n    Longitud minima del campo
  * %-    Alineación izquierda
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
 // Notemos el espacio despues del forwardslash
 printf("255/%15d 130/%15d\n", notOFInt, overFlowInt);
 printf("Real number is: %d\n", overFlowInt+ 256);

 /*
  * Operadores
  *  Aritmeticos
  *    +    Suma
  *    -    Resta
  *    *    Multiplicacion
  *    /    Division
  *    %    Modulo
  *    ++   Incremento
  *    --   Decremento
  *    +=   Y similares existen en C
  *  TODO Logicos
  *
  *
  */
 //TODO Seguir a partir de Operadores aritmeticos
 int numerador = 5, denominador = 3;
 printf("La division se trunca con enteros: 5/3 = %d\n", numerador/denominador);
 printf("Cast Java-like, o bien, cambiar el tipo de dato: 5/2=%f\n", (float) numerador/denominador);
 int modulo = 3;
 int entero = 24323;
 printf("Operacion modulo con \% : 24323 \% 3 = %d\n", entero%modulo);
 int variableLoop = 1;
 printf("Inicial %d\n", variableLoop++);
 printf("Inicial %d\n",++variableLoop);
 printf("Inicial %d\n", variableLoop += 6);

 /*
  * Gestion de std input
  *
  */
 int edad;
 printf("Indica tu edad: \n");
 scanf("%d", &edad);
 printf("Naciste en %d\n", 2023 - edad);
 // [bytes], provoca buffer overflow si se sobrepasan los bytes
 char nombreInp[25];
 printf("Indica tu nombre: \n");
 // scanf lee hasta el primer espacio en blanco
 // ("formatSpecifier", &variable), & -> address of operador
 scanf("%s", &nombreInp);
 printf("Bienvenido al programa %s\n", nombreInp);
 // TODO investigar fflush(stdin);
 // Sin él fgets no espera a ser leído
 fflush(stdin);

 // fgets lee toda la linea
 // (variable sin address of, bytes, stdin)
 char nombreCompleto[25];
 printf("Indica tu nombre completo: \n");
 fgets(nombreCompleto, 25, stdin);
 printf("Bienvenido al programa %s", nombreCompleto);

 return 0;
}
