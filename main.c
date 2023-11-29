#include <ctype.h>   // Para diversas funciones, como strings
#include <math.h>    // Para funciones matematicas
#include <stdbool.h> // Para poder usar booleanos
#include <stdio.h>   // Para standar I/O
#include <string.h>  // Para funciones string

void esPar(int n) {
  if (!n % 2) {
    printf("El numero %d es par\n", n);
  } else {
    printf("El numero %d es impar\n", n);
  }
}
int masSiete(int x) { return x + 7; }
int alCuadrado(int x) { return x * x; }

// Ver el tema de funcion prototipo
bool identidadSumaSeno(double x, double y);

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
  printf("Real number is: %d\n", overFlowInt + 256);

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
   *  Logicos
   *    &&   Conjuncion logica
   *    ||   Disyuncion logica
   *    ==   Equals
   *    !=   Not equals
   *    !    Negation
   *
   */
  // TODO Seguir a partir de Operadores aritmeticos
  int numerador = 5, denominador = 3;
  printf("La division se trunca con enteros: 5/3 = %d\n",
         numerador / denominador);
  printf("Cast Java-like, o bien, cambiar el tipo de dato: 5/2=%f\n",
         (float)numerador / denominador);
  int modulo = 3;
  int entero = 24323;
  printf("Operacion modulo con \% : 24323 \% 3 = %d\n", entero % modulo);
  int variableLoop = 1;
  printf("Inicial %d\n", variableLoop++);
  printf("Inicial %d\n", ++variableLoop);
  printf("Inicial %d\n", variableLoop += 6);

  /*
   * Gestion de std input
   *
   */
  int edad;
  printf("Indica tu edad: \n");
  // scanf("%d", &edad);
  printf("Naciste en %d\n", 2023 - edad);
  // [bytes], provoca buffer overflow si se sobrepasan los bytes
  char nombreInp[25];
  printf("Indica tu nombre: \n");
  // scanf lee hasta el primer espacio en blanco
  // ("formatSpecifier", &variable), & -> address of operador
  // scanf("%s", &nombreInp);
  printf("Bienvenido al programa %s\n", nombreInp);

  // TODO investigar fflush(stdin);
  // Sin él fgets no espera a ser leído
  fflush(stdin);

  // fgets lee toda la linea
  // (variable sin address of, bytes, stdin)
  char nombreCompleto[25];
  printf("Indica tu nombre completo: \n");
  // fgets(nombreCompleto, 25, stdin);
  printf("Bienvenido al programa %s\n", nombreCompleto);

  /*
   * libreria <math.h>
   * sqrt(radicando)
   * pow(base, potencia)
   * round(numero) <=5 sube
   * ceil(numero)
   * floor(numero)
   * fabs(numero)
   * log(numero) base e
   * sin(angulo) en radianes
   */
  double raizDos = sqrt(2);
  double potencia17 = pow(17, 2);
  printf("Raiz y potencia: %lf %lf\n", raizDos, potencia17);
  int redondearBajo = round(4.4);
  int redondearAlto = round(4.5);
  int funcionTecho = ceil(23.01);
  int funcionPiso = floor(23.9999);
  printf("<5 %d, >=5 %d, techo %d, piso %d \n", redondearBajo, redondearAlto,
         funcionTecho, funcionPiso);
  double valorAbs = fabs(-213);
  double logaritmo = log(2.71828);
  double seno = sin(3.14159 / 2);
  printf("Algunas funciones: (valorAbs, logaritmo, seno) "
         "(%lf, %lf, %lf)\n",
         valorAbs, logaritmo, seno);

  const double PI = 3.14159;
  double radius;
  printf("Introduce el radio: ");
  // scanf("%lf", &radius);
  printf("La circunferencia es: %lf\n", 2 * PI * radius);

  // --------------------- Empiezan estructuras ----------------------------------- \\

  /*
   * Estructuras if
   *   if( boolean expr) { ... }
   *   switch( valor a testear) {
   *    case comparacion : ...; break;
   *    .
   *    .
   *    .
   *    default: ...;
   *   }
   *
   * Operador ternario (expresion booleana) ? returnUno : returnElse;
   */
  int edadCumplidos = 19;
  if (edadCumplidos >= 60) {
    printf("Ya eres dde la tercera edad.\n");
  } else if (edadCumplidos >= 18) {
    printf("Eres un adulto legalmente\n");
  } else {
    printf("Aún se te considera niño\n");
  }
  char estadoRep = 'O';
  switch (estadoRep) {
  case 'A':
    printf("Eres de Aguascalientes\n");
    break;
  case 'C':
    printf("Eres de Coahuila\n");
    break;
  case 'O':
    printf("Eres de Oaxaca\n");
    break;
  default:
    printf("Eres de otro estado de la república\n");
  }

  // Conversor de temperatura
  char unit;
  float temperature;
  printf("Is the initial temperature in F or C?");
  // scanf("%c", &unit);
  unit = toupper(unit);
  if (unit == 'C') {
    printf("Enter the temperature value:\n");
    // scanf("%f", &temperature);
    printf("The temperature is on %.2f Farennheit\n", temperature * 9 / 5 + 32);
  } else if (unit == 'F') {
    printf("Enter the temperature value:\n");
    // scanf("%f", &temperature);
    printf("The temperature is on %.2f Celsius\n", (temperature - 32) * 5 / 9);
  } else {
    printf("The unit may not exist.\n");
  }

  // Calculadora binaria
  fflush(stdin);

  char operadorBinario;
  double operando1, operando2;
  printf("Introduce el operador + - * /\n");
  // scanf("%c", &operadorBinario);
  printf("Introduce el primer operando: ");
  // scanf("%lf", &operando1);
  printf("\nIntroduce el segundo operando: \n");
  // scanf("%lf", &operando2);
  switch (operadorBinario) {
  case '+':
    printf("El resultado de la suma es %.2f\n", operando1 + operando2);
    break;
  case '-':
    printf("El resultado de la resta es %.2f\n", operando1 - operando2);
    break;
  case '/':
    if (operando2 != 0) {
      printf("El resultado de la division es %.2f\n", operando1 / operando2);
    } else {
      printf("Division entre cero no válida\n");
    }
    break;
  case '*':
    printf("El resultado de la multiplicacion es %.2f\n",
           operando1 * operando2);
    break;
  default:
    printf("No es una operacion aceptada\n");
  }

  /*
   * Funciones
   * tipoRetorno nombreFuncion(arg){ ... }
   *
   * Prototype functions
   * Declaracion de funciones antes del main, sin cuerpo,
   * que nos asegura que las llamada a las funciones se hagan
   * con el numero correcto de argumentos
   */
  esPar(7);
  int abscisa = 2;
  printf("(x+7)^2 = %d\n", alCuadrado(masSiete(abscisa)));
  printf("x^2 + 7 = %d\n", masSiete(alCuadrado(abscisa)));
  double alfa = 25;
  double beta = 26;
  printf("¿sin(25 + 26) = sin(25)cos(26) - cos(25)sin(26)? "
         "-> %s\n",
         identidadSumaSeno(alfa, beta) ? "Verdadero" : "Falso");

  /*
   * String functions. Requires <string.h>
   * strlwr( myStr )               Asigna la string a su version minusculas
   * strupr( myStr )               Asigna la string a su version mayusculas
   * strcat( dstStr, srcStr )      Asigna a la string dst el valor de la src
   * strncat( dstStr, srcStr, n )  Asinga los primeros n caracteres de src a dst
   * strcpy( dstStr, srcStr )      Asigna la string src a dst
   * strncpy( dstStr, srcStr, n )  Asigna los primeros n caracteres de src a dst
   *
   * strset( myStr, myChar)        Remplaza myChar en cada caracter de myStr
   * strnset( myStr, myChar, n)    Remplaza los primos n caracteres de myStr
   * strrev( mySrt)                Invierte myStr
   *
   * strlen( myStr )               Devuelve la longitud de la string
   * strcmp( myStr, oStr )         Compara dos strings
   * strncom( myStr, oStr, n)      Compara los primeros n caracteres de las
   * strings strcmpi( myStr, oStr )Compara dos srtings, case insensitive
   * strnicmp( myStr, oStr, n)     Compara los primeros n caracteres de las
   *                                 strings
   *
   */
  char lorem[] = "lorem";
  char ipsum[] = "ipsum";
  char copy[25];
  // Notemos la impresión: Las funciones str son mutantes
  // aka, sobreescriben el valor original
  printf("strlwr: %s,\nstrupr: %s,"
         "\nstrcat: %s,\nstrncat: %s,"
         "\nstrcpy: %s,\nstrncpy: %s\n",
         strlwr(lorem), strupr(ipsum), strcat(lorem, ipsum),
         strncat(lorem, ipsum, 3), strcpy(copy, lorem),
         strncpy(ipsum, lorem, 3));
  // TODO ¿Por qué [ 6 ]?
  lorem[6] = "lorem";
  ipsum[6] = "ipsum";
  printf("Originales: %s %s\n"
         "strset y strnst: %s %s\n"
         "strrvt: %s",
         lorem, ipsum
         , strset( lorem, '*'), strnset( lorem, '-', 2)
         , strrev(lorem)
         );



      return 0;
}

bool identidadSumaSeno(double x, double y) {
  return sin(x + y) == sin(x) * cos(y) + cos(x) * sin(y);
}
