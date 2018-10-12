#include <iostream>
#include <cstdlib>
#include <fstream>
#include "unstatistic.h"
#include "unarray.h"
#include "windows.h"
#include "menu.h"


using namespace std;

int main()
{

    presentacion();
    system("pause");
    system("cls");
    slogan();
    cout<<" Bienvenido"<<endl;
    cout<<endl;
    cout<<"     En esta suite tendra la posibilidad de realizar calculos estadisticos en datos discretos"<<endl;
    cout<<"     de un forma rapida y sencilla"<<endl;
    cout<<endl;
    system("pause");
    cout<<endl;
    ////SetConsoleOutputCP(1252);
    ////SetConsoleCP(1252);
    cout.precision(10);
    bool salir=false;
    bool salirp=true;
    bool salira=true;
    bool mp=true;
    int opcion;
    int asime;
    char seguro= 121;
    char seguro2;
    int n_nombre = 260;
    system("cls");
    /////////////////////////////
    //char* dst = crear_cadena(n_nombre);
    //cout << "Por favor ingrese el nombre de los datos a analizar: ";
    //dst= leer_cadena(cin, dst, n_nombre);
    ////////////////////////////////////////////////

    do
    {
        system("cls");
        menu_principal();
        cout << endl;
        cout << "\t\tOpcion: ";
        cin >> opcion;
        system("cls");
        char* dst = crear_cadena(n_nombre);
        switch(opcion)

        {
        case 1:
            {
                cout << "Por favor ingrese el nombre de los datos a analizar: ";
                cin.ignore(); //Elimina el último carácter del flujo de entrada
                cin.getline(dst,n_nombre);
                do
            {
            cout << endl;
            ifstream ifs(dst);
            int n= leer_n(ifs);
            ifs.close();
            ifs.open(dst);
            double* x = crear_arreglo_double(n);
            leer_arreglo_double(ifs,x,n);
            double* y = ordenar(x,n);
            system("cls");
            cout << "Porfavor escoja alguna de las opciones que se presentan a continuacion: " << endl << endl;
            menu_estadistico();
            cout << endl;
            cout << "\t\tOpcion: ";
            cin >> opcion;
            system("cls");
            switch(opcion)
            {
                case 1:
                    cout << "el valor maximo de los datos es: " << max(x, n) << endl;
                    system("pause");
                    break;
                case 2:
                    cout << "el valor minimo de los datos es: " << min(x, n) << endl;
                    system("pause");
                    break;
                case 3:
                    cout << "El rango de los datos es " <<rango(x, n) << endl;
                    system("pause");
                    break;
                case 4:
                    cout<<"la media es:  "<<media( x, n)<<endl;
                    system("pause");
                    break;
                case 5:
                    cout << "La media geometrica es : " << media_geometrica(x, n) << endl;
                    system("pause");
                    break;
                case 6:
                    cout << "La media armonica es : " << media_armonica(x, n) << endl;
                    system("pause");
                    break;
                case 7:
                    cout << "La mediana es :" <<mediana(x, n) << endl;
                    system("pause");
                    break;
                case 8:
                    cout << "La moda es  : " << moda(x, n)<< endl;
                    system("pause");
                    break;
                case 9:
                    cout << "La varianza es  : " << varianza(x, n)<< endl;
                    system("pause");
                    break;
                case 10:
                    cout << "La desviacion estandar es  : " <<desviacion_estandar(x, n)<< endl;
                    system("pause");
                    break;
                case 11:
                    cout << "los cuartiles son: "<< endl;
                    cout<<"cuartil 1    "<<cuartil(x, n, 1)<<endl;
                    cout<<"cuartil 2    "<<cuartil(x, n, 2)<<endl;
                    cout<<"cuartil 3    "<<cuartil(x, n, 3)<<endl;
                    system("pause");
                    break;
                case 12:
                    cout << "El rango intercuartilico es  : " <<rango_intercuartilico(x, n)<< endl;
                    system("pause");
                    break;
                case 13:
                    cout << "El limite superior es : " <<limite_superior(x, n)<< endl;
                    system("pause");
                    break;
                case 14:
                    cout << "el limite inferior es  : " <<limite_inferior(x, n)<< endl;
                    system("pause");
                    break;
                case 15:
                    do
                    {
                        menu_asimetria();
                        cout << endl;
                        cout << "\t\tOpcion: ";
                        cin>> asime;
                        system("cls");
                        switch(asime)
                        {
                        case 1:
                            cout<<"La asimetria de Pearson es:  "<<asimetria_pearson(x, n)<<endl;
                            cout<<endl;
                            if(asimetria_pearson(x,n)==0)
                            {
                              cout<<"La distribucion es simetrica"<<endl;
                            };
                            if(asimetria_pearson(x,n)>0)
                            {
                                cout<<"la distribución tiene un sesgo hacia la derecha"<<endl;
                            };
                            if(asimetria_pearson(x,n)<0)
                            {
                               cout<<"la distribución tiene un sesgo hacia la izquierda"<<endl;
                            };
                            system("pause");
                            system("cls");
                            break;
                        case 2:
                            cout<<"La asimetria de Bowley es:  "<<asimetria_bowley(x, n)<<endl;
                            cout<<endl;
                            if(asimetria_bowley(x,n)==0)
                            {
                              cout<<"La distribucion es simetrica"<<endl;
                            };
                            if(asimetria_bowley(x,n)>0)
                            {
                                cout<<"la distribución tiene un sesgo hacia la derecha"<<endl;
                            };
                            if(asimetria_bowley(x,n)<0)
                            {
                               cout<<"la distribución tiene un sesgo hacia la izquierda"<<endl;
                            };


                            system("pause");
                            system("cls");
                            break;
                        case 3:
                            cout<<"La asimetria de Fisher es:  "<<asimetria_fisher(x, n)<<endl;
                            cout<<endl;
                             if(asimetria_fisher(x,n)==0)
                            {
                              cout<<"La distribucion es simetrica"<<endl;
                            };
                            if(asimetria_fisher(x,n)>0)
                            {
                                cout<<"la distribucion tiene un sesgo hacia la derecha"<<endl;
                            };
                            if(asimetria_fisher(x,n)<0)
                            {
                               cout<<"la distribucion tiene un sesgo hacia la izquierda"<<endl;
                            };

                            system("pause");
                            system("cls");
                            break;
                        case 4:
                            salira = false;
                            break;
                        default:
                            salira = true;
                        };
                    }while(salira);
                    break;
                case 16:
                    cout << "Coeficiente de apuntamiento es  : " <<coeficiente_apuntamiento(x, n)<< endl;
                     if(coeficiente_apuntamiento(x,n)==3)
                            {
                              cout<<"La distribucion es mesocurtica"<<endl;
                            };
                            if(coeficiente_apuntamiento(x,n)>3)
                            {
                                cout<<"la distribucion es leptocurtica"<<endl;
                            };
                            if(coeficiente_apuntamiento(x,n)<3)
                            {
                               cout<<"la distribucion es platicurtica"<<endl;
                            };

                    system("pause");
                    break;
                case 17:
                    cout << "El diagrama de cajas y bigotes que resume los datos es " << endl;
                    boxplot(cout,y,n);
                    system("pause");
                    break;
                case 18:
                    analisis_completo(x , n);
                    system("pause");
                    break;
                case 19:
                    mp = false;
                    break;
                default:
                    mp = false;
                };
            }while(mp);
            }
            break;
        case 2:
            do
            {
                menu_combi();
                cout << endl;
                cout << "\t\tOpcion: ";
                cin >> opcion;
                system("cls");
                switch(opcion)
                {
              case 1:
                cout<<"introduzca el numero n de elementos del conjunto"<<endl;
                int t;
                cout<<endl;
                cin>>t;
                cout<<endl;
                cout<<"introduzca el numero r para permutar n elementos de r en r"<<endl;
                int kk;
                cout<<endl;
                cin>>kk;
                cout<<endl;
                cout <<"El numero permutaciones de un conjunto de "<<t<<" elementos de "<<kk<<" en "<<kk<<" P("<<t<<","<<kk<< ") es : "<<permutacion(t, kk)<<endl;
                system("pause");
                system("cls");
                break;
              case 2:
                int yy;
                int uu;
                cout<<endl;
                cout<<"introduzca el numero n de elementos del conjunto"<<endl;
                cout<<endl;
                cin>>yy;
                cout<<endl;
                cout<<"introduzca el numero r para combinar n elementos de r en r"<<endl;
                cout<<endl;
                cin>>uu;
                system("pause");
                cout<<endl;
                cout <<"El numero de combinaciones de un conjunto de "<<uu<<" elemetos de "<<yy<<" en "<<yy<<" P("<<yy<<","<<uu<< ") es : "<< combinacion( yy, uu)<<endl;
                cout<<endl;
                system("pause");
                system("cls");
                break;
              case 3:
                salirp = false;
                break;
              default:
                salirp = true;
                };
            }while(salirp);
            break;
        case 3:
            cout<<"introduzca el punto X a evaluar"<<endl;
            double z;
            cout<<endl;
            cin >>z;
            cout<<endl;
            cout<<"introduzca la media"<<endl;
            double mu;
            cout<<endl;
            cin>> mu;
            cout<<endl;
            cout<<"introduzca la desviacion estandar"<<endl;
            double sigma;
            cout<<endl;
            cin >>sigma;
            cout<<endl;
            cout<<"la densidad de la distribucion normal en el punto X = "<<z<<" es:  "<<distribucion_normal(z,mu,sigma)<<endl;
            cout<<endl;
            system("pause");
            break;
        case 4:

           {
            char* al = crear_cadena(n_nombre);
            cout << "Por favor ingrese el nombre de los datos para realizar el ajuste lineal:  "<<endl;
            cin.ignore(); //Elimina el último carácter del flujo de entrada
            cin.getline(al,n_nombre);
            ifstream rda(al);
            int g =  (leer_n(rda)/2);
            cout<<"datos "<<g<<endl;
            rda.close();
            rda.open(al);
            double* arx = crear_arreglo_double(g);
            double* ary = crear_arreglo_double(g);
            leer_abscisas(rda,arx, g);
            leer_ordenadas(rda,ary, g);
            double* prod= crear_arreglo_double(g);
            prod= producto_vector(arx, ary, g);
            double* linea=crear_arreglo_double(2);
            linea= linea_regresion(arx, ary, g);
            cout<<"La linea que mejor se ajusta a los datos obtenidos a partir del experimento realizado, es :"<<endl;
            cout<<endl;
            cout <<"Y =  ";
            cout<<linea[1]<<"x + "<<linea[0]<<endl;
            cout<<endl;
            cout <<"Cantidad de azucar refinada Y variando la Temperatura X";
            cout<<endl;
            rda.close();
            system("pause");
            system("pause");
           }

            break;
        case 5:
            cout<<endl;
            cout<<"Mapa de Funciones"<<endl;
            cout<<endl;
            menu_ayuda();
            system("pause");
            break;
        case 6:
            acercade();
            system("pause");
            break;
        case 7:
            cout<<endl;
            cout<<endl;
            cout<<"\t Esta seguro que desea salir de la suite?  (y/n)"<<endl;
            cout<<endl;
            cout<<"         ";
            cin>> seguro2;
            if(seguro==seguro2)
            {
                salir = true;
            };
            break;
        default:
            salir = false;
        };
    }while(!salir);
    system("cls");
    cout<<"  Vuelve pronto ;) "<<endl;
    return 0;
};
