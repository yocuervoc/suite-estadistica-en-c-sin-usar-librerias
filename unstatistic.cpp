#include "unstatistic.h"
#include "unarray.h"


double rango(double* x, int n)
{
    double M= max(x, n);
    double m= min( x, n);
    return M-m;
};
double media(double* x, int n)
{
    int c=0;
    double s=0;
    while(c<n)
    {
        s=s+x[c];
        c++;
    }
    return (s/(n));
};


double media_armonica(double*x, int n)
{
    double* i = crear_arreglo_double(n);
    int c=0;
    double s=0;
    while(c<n)
    {
        i[c]= (1/x[c]);
        s=s+(i[c]);
        c++;
    };
    return (n/s);
};
double mediana(double* x, int n)
{
    if((n%2)==0)
    {
        double a=(x[(n/2)-1]+x[n/2])/2;
        return a;
    }
    else
    {
        double a=(x[((n+1)/2)-1]);
        return a;
    };
};
double moda(double* x, int n)
{
  int a=0,b,m=0,s=1;
  double md;
  while(a<n)
  {
      b=a+1;
      s=1;
      while(x[a]==x[b])
      {
          s=s+1;
          b++;
      };
      if(s>m)
      {
        md=x[a];
        m=s;
      };
      a=b;
  };
    return md;
};
double varianza(double* x, int n)
{
    int c=0;
    double s=0;
    while(c<n)
    {
        s=s+((x[c]- promedio(x, n))*(x[c]- promedio( x, n)));
        c++;
    };
    return (s/(n-1));
};
double desviacion_estandar(double* x, int n)
{
    return raiz(varianza(x, n));
};
double media_geometrica(double* x, int n)
{
    int c=0;
    double s=0;
    while(c<n)
    {
        s=s+ln(x[c]);
        c++;
    };
    s=(s/n);
    return (expo(s));
};

double percentil(double* x, int n, int p)
{
    double c=p/100.0;
    double w= n*c;
    ceil (w);
    int l=w;
    return x[l-1];
};


double decil(double* x, int n, int d)
{
    double c=d/10.0;
    double w= n*c;
    ceil (w);
    int l=w;
    return x[l-1];
};
double quintil(double* x, int n, int q)
{
    double c=q/5.0;
    double w= n*c;
    ceil (w);
    int l=w;
    return x[l-1];
};
double cuartil(double* x, int n, int k)
{
    double c=k/4.0;
    double w= n*c;
    ceil (w);
    int l=w;
    return x[l-1];
};

double rango_intercuartilico(double* x, int n)
{
    double c=3/4.0;
    double w= n*c;
    ceil (w);
    int l=w;

    double r=1/4.0;
    double t= n*r;
    ceil (t);
    int p=t;
    return (x[l-1]-x[p-1]);
};
double limite_superior(double* x, int n)
{
    double r=3/4.0;
    double t= n*r;
    ceil (t);
    int p=t;
    double ls=x[p-1]+1.5* rango_intercuartilico(x, n);
    return ls;
};

double limite_inferior(double* x, int n)
{
    double r=1/4.0;
    double t= n*r;
    ceil (t);
    int p=t;
    double ls=x[p-1]-1.5* rango_intercuartilico(x, n);
    return ls;
};
double asimetria_pearson(double* x, int n)
{
  double as= (promedio(x, n)- mediana(x, n)) / desviacion_estandar(x,n);
  return 3*as;
};
double asimetria_bowley(double* x, int n)
{
    double c=3/4.0;
    double w= n*c;
    ceil (w);
    int l=w;

    double r=1/4.0;
    double t= n*r;
    ceil (t);
    int p=t;

    double as= (x[l]+x[p]-2*mediana(x, n))/(x[l]-x[p]);
    return as;
};
double asimetria_fisher(double* x, int n)
{
    int c=0;
    double j;
    double s=0;
    while(c<n)
    {
        j=x[c]-promedio(x, n);
        s=s+pot(j, 3);
        c++;
    };
    double ds=pot(desviacion_estandar(x, n), 3);
    return s/(ds*n);
};
double coeficiente_apuntamiento(double* x, int n)
{
    int c=0;
    double j;
    double s=0;
    while(c<n)
    {
        j=x[c]-promedio(x, n);
        s=s+pot(j, 4);
        c++;
    };
    double ds=pot(desviacion_estandar(x, n), 4);
    return s/(ds*n);
};

int permutacion(int n, int k)
{
    int p=(fact(n)/((fact(n-k))));
    return p;
};
int combinacion(int n, int k)
{
    int p=(fact(n)/(fact(k)*(fact(n-k))));
    return p;
};
double distribucion_normal(double x, double mu, double sigma)
{
    double pi=3.14159265359;
    double f=(1/(raiz(2*pi)*sigma));
    double ex;
    ex= -0,5*(pot(((x-mu)/sigma), 2));
    double r= f* expo(ex);
    return r;
};

double* linea_regresion(double* x, double* y, int n)
{
    double* a=crear_arreglo_double(2);
    double an=(sumatoria_vector(y, n)*sumatoria_vector_cuadrado(x,n))-(sumatoria_vector(x,n)*(sumatoria_vector(producto_vector(x,y,n),n)));
    double d=(n*sumatoria_vector_cuadrado(x,n)-pot(sumatoria_vector(x,n),2));
    a[0]=(an/d);
    double bn=(n*sumatoria_vector(producto_vector(x ,y, n),n)-(sumatoria_vector(x,n)*sumatoria_vector(y,n)));
    a[1]=(bn/d);
    return a;
};




