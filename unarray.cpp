#include "unarray.h"
#include "unstatistic.h"
#define rows 9
#define cols 75

int leer_int(istream& is)
{
    int a;
    is >> a;
    return a;
};

double leer_double(istream& is)
{
    double a;
    is >> a;
    return a;
};

ostream& escribir_double(double a, ostream& os)
{
    os << a;
    os << '\t';
    return os;
};

double* crear_arreglo_double(int n)
{
    return new double[n];
};

void liberar_arreglo_double(double* x, int n)
{
    delete[] x;
    return;
};

double* leer_arreglo_double(istream& is, double* x, int n)
{
    for(int i = 0; i < n; i++)
    {
        x[i] = leer_double(is);
    };
    return x;
};

ostream& escribir_arreglo_double(ostream& os, double* x, int n)
{
    os << endl;
    for(int i = 0; i < n; i++)
    {
        escribir_double(x[i],os);
    };
    return os;
};

double* copiar(double* x, int n){
    double* y = crear_arreglo_double(n);
    for(int i = 0; i < n; i++){
        y[i] = x[i];
    };
    return y;
};

int pos_max(double* x, int n)
{
    if(n == 1)
    {
        return 0;
    };
    int k = pos_max(x, n - 1);
    if(x[k] > x[n - 1])
    {
        return k;
    };
    return n - 1;
};

double* ordenar(double* x, int n)
{
    if(n == 1)
    {
        return x;
    }
    else
    {
        int k = pos_max(x, n);
        double t = x[k]; //swap 1
        x[k] = x[n-1]; //swap 2
        x[n-1] = t; //swap 3
        return ordenar(x,n-1);
    };
};

double max(double* x, int n)
{
    double M = x[0];
    for(int i = 1; i < n; i++)
    {
        if(M < x[i])
        {
            M = x[i];
        };
    };
    return M;
};

double min(double* x, int n)
{
    double m = x[0];
    for(int i = 1; i < n; i++)
    {
        if(m > x[i])
        {
            m = x[i];
        };
    };
    return m;
};

int fact(int n)
{
    int F = 1;
    for(int i = 2; i <= n; i++)
    {
        F *= i;
    };
    return F;
};

double pot(double x, int n)
{
    double P = 1.0;
    for(int i = 1; i <= n; i++)
    {
        P *= x;
    };
    return P;
};

double expo(double x)
{
    double E = 0.0;
    double P = 1.0;
    int F = 1.0;
    for(int i = 0; i <= 15; i++)
    {
        E += P / F;
        P *= x;
        F *= i+1;
    };
    return E;
};

double ln(double x)
{
    double L = 0.0;
    double B = (x * x - 1)/(x * x + 1);
    double P = B;
    for(int i = 0; i <= 2500; i++)
    {
        L += P / (2 * i + 1);
        P *= B*B;
    };
    return L;
};

double valor_absoluto(double x)
{
    return x >= 0 ? x : -x;
};

double raiz(double x)
{
    double Xo;
    double Xi = x;
    do
    {
        Xo = Xi;
        Xi = 0.5 * (Xo + x / Xo);
    }
    while(valor_absoluto(Xo - Xi) >= 1e-8);
    return 0.5 * (Xi + x / Xi);;
};

int trunc(double x)
{
    double y = valor_absoluto(x);
    int i = 0;
    while(y > 1)
    {
        i++;
        y /= 10.0;
    };
    int value = 0;
    int d;
    for(int j = 0; j < i; j++)
    {
        y *= 10.0;
        value *= 10;
        if(y < 1)
        {
            d = 0;
        }
        else if(y < 2)
        {
            d = 1;
        }
        else if(y < 3)
        {
            d = 2;
        }
        else if(y < 4)
        {
            d = 3;
        }
        else if(y < 5)
        {
            d = 4;
        }
        else if(y < 6)
        {
            d = 5;
        }
        else if(y < 7)
        {
            d = 6;
        }
        else if(y < 8)
        {
            d = 7;
        }
        else if(y < 9)
        {
            d = 8;
        }
        else
        {
            d = 9;
        }
        value += d;
        y -= d;
    };
    return x >= 0 ? value : -value;
};

int floor(double x)
{
    return x >= 0 ? trunc(x) : trunc(x)-1;
};

int ceil(double x)
{
    return x > 0 ? trunc(x)+1 : trunc(x);
};

double frac(double x)
{
    return valor_absoluto(x - trunc(x));
};

int round(double x)
{
    if(x >= 0)
    {
        return frac(x) >= 0.5 ? ceil(x) : floor(x);
    }
    else
    {
        return -round(-x);
    };
};
double promedio(double* x, int n)
{
    int c=0;
    double s=0;
    while(c<n)
    {
        s=s+x[c];
        c++;
    };
    return (s/n);
};
double* leer_abscisas(istream& is, double* x, int n)
{
  for(int i = 0; i < n; i++)
  {
    x[i] = leer_double(is);
  };
  return x;
};
double* leer_ordenadas(istream& is, double* x, int n)
{
  for(int i = 0; i < n; i++)
  {
    x[i] = leer_double(is);
  };
  return x;
};
double sumatoria_vector(double* x, int n)
{
    int c=0;
    double s=0;
    while(c<n)
    {
        s=s+x[c];
        c++;
    };
    return s;
};

double sumatoria_vector_cuadrado(double* x, int n)
{
    int c=0;
    double s=0;
    while(c<n)
    {
        s=s+ pot(x[c],2);
        c++;
    };
    return s;
};

double* producto_vector(double* x, double* y, int n)
{
    int c=0;
    double* s= crear_arreglo_double(n);
    while(c<n)
    {
        s[c]=x[c]*y[c];
        c++;
    };
    return s;
};
int leer_n(istream& is)
{
    double f;
    int n=0;
    while(is>> f)
    {
        n++;
    };
    return n;
};

char* crear_cadena(int n){
return new char[n];
};

char* leer_cadena(istream& is, char* x, int n){
is.getline(x, n);
return x;
};
//////////////////////////////UNMATRIX///////////////
char** crear_matriz_char(int n, int m)
{
    char** X = new char*[n];
    for(int i = 0; i < n; i++)
    {
        X[i] = new char[m];
    };
    return X;
};

void liberar_matriz_char(char** X, int n, int m)
{
    for(int i = 0; i < n; i++)
    {
        delete[] X[i];
    };
    delete[] X;
    return;
};

char** leer_matriz_char(istream& is, char** X, int n, int m)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            X[i][j] = leer_char(is);
        };
    };
    return X;
};

int leer_char(istream& is)
{
    char a;
    is >> a;
    return a;
};



ostream& escribir_matriz_char(ostream& os, char** X, int n, int m)
{
    escribir_char('\n', os);
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            escribir_char(X[i][j], os);
        };
        escribir_char('\n', os);
    };
    escribir_char('\n', os);
    return os;
};
ostream& escribir_char(char a, ostream& os)
{
    os << a;
    return os;
};


char** limpiar_matriz_char(char** X, int n, int m)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            X[i][j] = ' ';
        };
    };
    return X;
};
////////////////////////////////////////////////////////////////
/////////////////////UNGRAFICA/////////////////////////////////
#define rows 9
#define cols 75

char int2char(int n)
{
    switch(n)
    {
    case 0:
        return '0';
    case 1:
        return '1';
    case 2:
        return '2';
    case 3:
        return '3';
    case 4:
        return '4';
    case 5:
        return '5';
    case 6:
        return '6';
    case 7:
        return '7';
    case 8:
        return '8';
    case 9:
        return '9';
    default:
        return ' ';
    };
};

char** imprimir_en_matriz(char** X, int n, int m, double a, int i, int j)
{
    int dec = 2;
    bool neg = a < 0.0 ? true : false;
    double e = valor_absoluto(a);
    double f = frac(a);
    int l = 0;
    while(e > 1.0)
    {
        l++;
        e /= 10;
    };
    int tam = 0;
    if(neg)
    {
        tam++;
    };
    tam += l;
    if(f > 0.0)
    {
        tam ++;
        tam += dec;
    };
    char* A = new char[tam];
    int k = 0;
    if(neg)
    {
        A[k] = '-';
        k++;
    }
    else
    {
        l--;
    };
    int b;
    for(; k <= l; k++)
    {
        e *= 10;
        b = trunc(e);
        A[k] = int2char(b);
        e -= b;
    };
    if(f > 0)
    {
        A[k] = '.';
        k++;
        for(l = 0; l < dec; l++)
        {
            f *= 10.0;
            b = trunc(f);
            A[k+l] = int2char(b);
            f -= b;
        };
    };
    int j1 = j < m-tam ? j : m-tam;
    for(k = 0; k < tam; k++)
    {
        X[i][j1+k] = A[k];
    };
    return X;
};

int transformar_espacio(double x, double xmin, double xmax, double ymin, double ymax)
{
    ymax--;
    double valor = ((ymax-ymin)/(xmax-xmin))*(x-xmin)+ymin;
    return round(valor);
};


char** boxplot(ostream& os, double* x, int l)
{
    char** A = crear_matriz_char(rows,cols+4);
    A = limpiar_matriz_char(A,rows,cols+4);
    double Max = max(x,l);
    double Min = min(x,l);
    double Q1 = cuartil(x,l,1);
    double Q2 = cuartil(x,l,2);
    double Q3 = cuartil(x,l,3);
    double Li = limite_inferior(x,l);
    double Ls = limite_superior(x,l);
    int i = 0;
    int MaxNew = transformar_espacio(Max,Min,Max,0,cols);
    int MinNew = transformar_espacio(Min,Min,Max,0,cols);
    int Q1New = transformar_espacio(Q1,Min,Max,0,cols);
    int Q2New = transformar_espacio(Q2,Min,Max,0,cols);
    int Q3New = transformar_espacio(Q3,Min,Max,0,cols);
    int LiNew = transformar_espacio(Li,Min,Max,0,cols);
    int LsNew = transformar_espacio(Ls,Min,Max,0,cols);
    int extInf;
    int extSup;
    for(i = 0; i <= cols+3; i++)
    {
        A[0][i] = '_';
        A[rows-1][i] = '_';
    };
    for(i = 1; i < rows; i++)
    {
        A[i][0] = '|';
        A[i][cols+3] = '|';
    };
    for(i = Q1New+1; i < Q3New; i++)
    {
        A[2][i+2] = '-';
        A[4][i+2] = '-';
    };
    A[2][Q1New+2] = '+';
    A[3][Q1New+2] = '|';
    A[4][Q1New+2] = '+';
    A[2][Q2New+2] = '+';
    A[3][Q2New+2] = '|';
    A[4][Q2New+2] = '+';
    A[2][Q3New+2] = '+';
    A[3][Q3New+2] = '|';
    A[4][Q3New+2] = '+';
    for(int i = 0; i < l; i++)
    {
        if((Min < x[i] && x[i] < Li) || (Ls < x[i] && x[i] < Max))
        {
            A[3][transformar_espacio(x[i],Min,Max,0,cols)+2] = 'o';
        };
    };
    if(Li >= Min)
    {
        A[3][LiNew+2] = '|';
        imprimir_en_matriz(A, rows, cols+2, Li, rows-1, LiNew+2);
        extInf = LiNew;
    }
    else
    {
        extInf = MinNew;
    };
    for(i = extInf+1; i < Q1New; i++)
    {
        A[3][i+2] = '-';
    };
    if(Ls <= Max)
    {
        A[3][LsNew+2] = '|';
        imprimir_en_matriz(A, rows, cols+2, Ls, rows-3, LsNew+2);
        extSup = LsNew;
    }
    else
    {
        extSup = MaxNew;
    };
    for(i = extSup-1; i > Q3New; i--)
    {
        A[3][i+2] = '-';
    };
    A[3][transformar_espacio(Min,Min,Max,0,cols)+2] = '<';
    A[3][transformar_espacio(Max,Min,Max,0,cols)+2] = '>';
    for(i = 0; i < cols; i++)
    {
        A[6][i+2] = '-';
    };
    imprimir_en_matriz(A, rows, cols+2, Min, rows-2, MinNew+2);
    A[rows-3][MinNew+2] = '+';
    imprimir_en_matriz(A, rows, cols+2, Q1, rows-2, Q1New+2);
    A[rows-3][Q1New+2] = '+';
    imprimir_en_matriz(A, rows, cols+2, Q2, rows-2, Q2New+2);
    A[rows-3][Q2New+2] = '+';
    imprimir_en_matriz(A, rows, cols+2, Q3, rows-2, Q3New+2);
    A[rows-3][Q3New+2] = '+';
    imprimir_en_matriz(A, rows, cols+2, Max, rows-2, MaxNew+2);
    A[rows-3][MaxNew+2] = '+';
    if(Li >= Min)
    {
        imprimir_en_matriz(A, rows, cols+2, Li, rows-2, LiNew+2);
        A[rows-3][LiNew+2] = '+';
    };
    if(Ls <= Max)
    {
        imprimir_en_matriz(A, rows, cols+2, Ls, rows-2, LsNew+2);
        A[rows-3][LsNew+2] = '+';
    };
    escribir_matriz_char(os,A,rows,cols+4);
    return A;
};
/////////////////////////////////////////////////////////////////////////////////
//////////////////////////PRINT///////////////////////////////////////////////7
