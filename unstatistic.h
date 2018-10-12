#ifndef UNSTATISTIC_H_INCLUDED
#define UNSTATISTIC_H_INCLUDED
#include "unarray.h"

double rango(double* x, int n);
double media(double* x, int n);
double media_armonica(double*x, int n);
double media_armonica(double*x, int n);
double mediana(double* x, int n);
double moda(double* x, int n);
double varianza(double* x, int n);
double desviacion_estandar(double* x, int n);
double media_geometrica(double* x, int n);
double percentil(double* x, int n, int p);
double decil(double* x, int n, int d);
double quintil(double* x, int n, int q);
double cuartil(double* x, int n, int k);
double rango_intercuartilico(double* x, int n);
double limite_superior(double* x, int n);
double limite_inferior(double* x, int n);
double asimetria_pearson(double* x, int n);
double asimetria_bowley(double* x, int n);
double asimetria_fisher(double* x, int n);
double coeficiente_apuntamiento(double* x, int n);
int permutacion(int n, int k);
int combinacion(int n, int k);
double distribucion_normal(double x, double mu, double sigma);
double* linea_regresion(double* x, double* y, int n);

#endif // UNSTATISTIC_H_INCLUDED
