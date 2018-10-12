#ifndef ARRAY_H_INCLUDED
#define ARRAY_H_INCLUDED

#include <fstream>
#include <iostream>

using namespace std;

// Permite leer un dato entero desde el flujo de entrada is
int leer_int(istream& is);

// Permite leer un dato real desde el flujo de entrada is
double leer_double(istream& is);

// Permite escribir un dato real en el flujo de salida os
ostream& escribir_double(double a, ostream& os);

// Permite crear un arreglo de reales de tamaño n
double* crear_arreglo_double(int n);

// Permite liberar un arreglo de reales de tamaño n
void liberar_arreglo_double(double* x, int n);

// Permite leer un arreglo x de reales de tamaño n desde el flujo de entrada is
double* leer_arreglo_double(istream& is, double* x, int n);

// Permite escribir un arreglo x de reales de tamaño n en el flujo de salida os
ostream& escribir_arreglo_double(ostream& os, double* x, int n);

// Permite crear una nueva copia de un arreglo de reales de tamaño n
double* copiar(double* x, int n);

// Retorna la posición del valor maximo de un arreglo de reales de tamaño n
int pos_max(double* x, int n);

// Retorna una nueva copia ordenada por medio del método
// de selección de un arreglo de reales de tamaño n
double* ordenar(double* x, int n);

// Retorna el valor máximo de un arreglo de reales de tamaño n
double max(double* x, int n);

// Retorna el valor mínimo de un arreglo de reales de tamaño n
double min(double* x, int n);
// Calcula el factorial de n
int fact(int n);

// Calcula el resultado de elevar x a la potencia n
double pot(double x, int n);

// Evalua la función exponencial en el valor x
double expo(double x);

// Evalua la función logaritmo natural en el valor x
double ln(double x);

// Calcula el valor absoluto de x
double valor_absoluto(double x);

// Calcula la raíz cuadrada de x
double raiz(double x);

// Calcula la función truncamiento de x
int trunc(double x);

// Calcula la función piso de x
int floor(double x);

// Calcula la función techo de x
int ceil(double x);

// Calcula la función parte fraccionaria de x
double frac(double x);

// Calcula la función redondeo de x
int round(double x);

double promedio(double* x, int n);

double* leer_abscisas(istream& is, double* x, int n);
double* leer_ordenadas(istream& is, double* x, int n);
double sumatoria_vector_cuadrado(double* x, int n);
double sumatoria_vector(double* x, int n);
double* producto_vector(double* x, double* y, int n);
int leer_n(istream& is);
char* crear_cadena(int n);
char* leer_cadena(istream& is, char* x, int n);

///////////////////////////////UNMATRIX///////////////////////////////////
char** crear_matriz_char(int n, int m);
void liberar_matriz_char(char** X, int n, int m);
char** leer_matriz_char(istream& is, char** X, int n, int m);
ostream& escribir_matriz_char(ostream& os, char** X, int n, int m);
char** limpiar_matriz_char(char** X, int n, int m);
///////////////////////////////////////////////////////////////////////////
//////////////////////////UNGRAFICA///////////////////////////////////////
char int2char(int n);
char** imprimir_en_matriz(char** X, int n, int m, double a, int i, int j);
int transformar_espacio(double x, double xmin, double xmax, double ymin, double ymax);
char** boxplot(ostream& os, double* x, int n);
////////////////////////////////////////////////////////////////////////////

int leer_char(istream& is);
ostream& escribir_char(char a, ostream& os);


//////////////////////////PRINT////////////////////////


/////////////////////////////////////////////////////////
#endif // ARRAY_H_INCLUDED
