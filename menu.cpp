#include "unarray.h"
#include "unstatistic.h"
#include "menu.h"
void menu_principal()
{
    cout << "ษออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป" <<endl;
    cout << "บ Por favor, escoja alguna de las opciones que se presentan a continuacion:บ" << endl;
    cout << "บ 1. Realizar analisis estadistico discreto                                บ" << endl;
    cout << "บ 2. Realizar calculos de combiciones y permutaciones                      บ" << endl;
    cout << "บ 3. Calcular densidad de la distribucion normal                           บ" << endl;
    cout << "บ 4. Realizar ajuste lineal                                                บ" << endl;
    cout << "บ 5. Ayuda                                                                 บ" << endl;
    cout << "บ 6. Acerca de                                                             บ" << endl;
    cout << "บ 7. Salir                                                                 บ" << endl;
    cout << "ศออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ" <<endl;

};
//////////////////////////////////////////////////////////////////////////////////////7
/////////////////////////// PRESENTACION///////////////////////////////////////////////

void slogan()
{
    cout<<"\n\n"<<endl;
    cout<<"\t\t     ษออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป"<<endl;
    cout<<"\t             บ\tษออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป  บ"<<endl;
    cout<<"\t             บ\tบ\t\t                                                       บ  บ "<<endl;
    cout<<"\t             บ\tบ\t\t                                                       บ  บ"<<endl;
    cout<<"\t             บ\tบ\t\t  7MH              MHM HMHMHMHMHMHMHMHM                บ  บ"<<endl;
    cout<<"\t             บ\tบ\t\t  (HM              HMH MHMHMH        MHMM              บ  บ"<<endl;
    cout<<"\t             บ\tบ\t\t  7HM              HMH MHMH            MHM             บ  บ"<<endl;
    cout<<"\t             บ\tบ\t\t  (MH              MHM HMHM            MHM             บ  บ"<<endl;
    cout<<"\t             บ\tบ\t\t  7HM              HMH MHM              HM             บ  บ"<<endl;
    cout<<"\t             บ\tบ\t\t   HM7            HMHM HMH              MH             บ  บ"<<endl;
    cout<<"\t             บ\tบ\t\t   MHM            HMHM HMH               M             บ  บ"<<endl;
    cout<<"\t             บ\tบ\t\t    MHMM       (MHMHMH MHM               M             บ  บ"<<endl;
    cout<<"\t             บ\tบ\t\t      MHMHMHMHMHMHMHMH MHM              HM             บ  บ"<<endl;
    cout<<"\t             บ\tบ\t\t                                                       บ  บ"<<endl;
    cout<<"\t             บ\tบ\t\t                                                       บ  บ"<<endl;
    cout<<"\t\t     บ\tศออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ  บ"<<endl;
    cout<<"\t\t     ศออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ"<<endl;
    cout<<"\n"<<endl;

    cout<<" อออออออออออออออออออออออออออออออออออออออออออ UNIVERSIDAD NACIONAL DE COLOMBIA อออออออออออออออออออออออออออออออออออออออออ"<<endl;
    cout<<" อออออออออออออออออออออออออออออออออออ PROGRAMACION DE COMPUTARES -- SUITE ESTADISTICA ออออออออออออออออออออออออออออออออออ"<<endl;
    cout<<"\n\n"<<endl;
};
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////MENU DE ANALISIS ESTADISTICO////////////////////////
void menu_estadistico()
{
    cout<<endl;
    cout<<endl;
    cout <<"ษออออหอออออออออออออออออออออออออออออออออออออออออออออออป"<<endl;
    cout << "บ1.  บ Para optener valor maximo                     บ" << endl;
    cout << "บ2.  บ Para optener valor minimo                     บ" << endl;
    cout << "บ3.  บ Para optener el rango                         บ" << endl;
    cout << "บ4.  บ Para optener la media                         บ" << endl;
    cout << "บ5.  บ Para optener la media geometrica              บ" << endl;
    cout << "บ6.  บ Para optener la media armonica                บ" << endl;
    cout << "บ7.  บ Para optener la mediana                       บ" << endl;
    cout << "บ8.  บ Para optener la moda                          บ" << endl;
    cout << "บ9.  บ Para optener la varianza                      บ" << endl;
    cout << "บ10. บ Para optener la desviacion estandar           บ" << endl;
    cout << "บ11. บ Para optener los cuartiles                    บ" << endl;
    cout << "บ12. บ Para optener el rango intercuartilico         บ" << endl;
    cout << "บ13. บ Para optener el limite superior para atipicos บ" << endl;
    cout << "บ14. บ Para optener el limite inferior para atipicos บ" << endl;
    cout << "บ15. บ Para optener el coeficiente de asimetria      บ" << endl;
    cout << "บ16. บ Para optener el coeficionete de apuntamiento  บ" << endl;
    cout << "บ17. บ Para dibujar el diagrama de cajas y bigotes   บ" << endl;
    cout << "บ18. บ Para realizar analisis descriptivo completo   บ" << endl;
    cout << "บ19. บ Para ir a menu principal                      บ"<<endl;
    cout <<"ศออออสอออออออออออออออออออออออออออออออออออออออออออออออผ"<<endl;
};
void menu_ayuda()
{
    cout<<endl;
    cout<<endl;
    cout << "ษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป            " <<endl;

    cout << "บ 1. Realizar analisis estadisticos discreto <ออออออออออออออออออออออออออออฮอออออออออออป" << endl;
    cout << "บ 2. Realizar calculos de combinaciones y permutaciones                   บ           บ" << endl;
    cout << "บ 3. Calcular distribucion normal                                         บ           บ" << endl;
    cout << "บ 4. Realizar ajuste lineal                                               บ           บ" << endl;
    cout << "บ 5. Ayuda                                                                บ           บ" << endl;
    cout << "บ 6. Acerca de                                                            บ           บ" << endl;
    cout << "บ 7. Salir                                                                บ           บ" << endl;
    cout << "ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ           บ" <<endl;

    cout <<"                                                                                      บ"<<endl;


    cout <<"ษออออออออออออออออออออออออออออออออออออออออออออออออออป                                  บ"<<endl;
    cout << "บ1.  Para optener valor maximo                     บ                                  บ" << endl;
    cout << "บ2.  Para optener valor minimo                     บ                                  บ" << endl;
    cout << "บ3.  Para optener el rango                         บ                                  บ" << endl;
    cout << "บ4.  Para optener la media                         บ                                  บ" << endl;
    cout << "บ5.  Para optener la media geometrica              บ                                  บ" << endl;
    cout << "บ6.  Para optener la media armonica                บ                                  บ" << endl;
    cout << "บ7.  Para optener la mediana                       บ                                  บ" << endl;
    cout << "บ8.  Para optener la moda                          บ                                  บ" << endl;
    cout << "บ9.  Para optener la varianza                      ฬออออออออออออออออออออออออออออออออออผ" << endl;
    cout << "บ10. Para optener la desviacion estandar           บ" << endl;
    cout << "บ11. Para optener los cuartiles                    บ" << endl;
    cout << "บ12. Para optener el rango intercuartilico         บ" << endl;
    cout << "บ13. Para optener el limite superior               บ" << endl;
    cout << "บ14. Para optener el limite inferior               บ" << endl;
    cout << "บ15. Para optener la asimetria  <ออออออออออออออออออฮออออออออออออออออออออออออออป" << endl;
    cout << "บ16. Para optener el coeficionete de apuntamiento  บ                          บ" << endl;
    cout << "บ17. Para dibujar el diagrama de cajas y bigotes   บ                          บ" << endl;
    cout << "บ18. Para realizar analisis descriptivo completo   บ                          บ" << endl;
    cout << "บ19. Para salir                                    บ                          บ"<<endl;
    cout <<"ศออออออออออออออออออออออออออออออออออออออออออออออออออผ                          บ"<<endl;
    cout <<"                                                                              บ"<<endl;
    cout <<"                                                ษอออหอออออออออออออออออออออออออสออออออออออออออออออออออป " << endl;
    cout <<"                                                บ1. บ Obtener la simetria de pearson                 บ" << endl;
    cout <<"                                                บ2. บ Obtener la simetria de Bowley                  บ" << endl;
    cout <<"                                                บ3. บ Obtener la simetria de Fisher                  บ" << endl;
    cout <<"                                                บ4. บ Salir                                          บ" << endl;
    cout <<"                                                ศอออสออออออออออออออออออออออออออออออออออออออออออออออออผ" <<endl;


};
///////////////////////////////////////////////////////////////////////////////////////////////////////////77
void menu_combi()
{
    cout<<"ษอออออออออออออออออออออออออออออป"<<endl;
    cout<<"บ  Escoja la opcion  deseada  บ"<<endl;
    cout<<"ฬอออหอออออออออออออออออออออออออน"<<endl;
    cout<<"บ1. บ Realizar permutacion    บ"<<endl;
    cout<<"บ2. บ Realizar combinacion    บ"<<endl;
    cout<<"บ3. บ Ir a menu principal     บ"<<endl;
    cout<<"ศอออสอออออออออออออออออออออออออผ"<<endl;
};

void menu_asimetria()
{
    cout <<"ษอออหออออออออออออออออออออออออออออออออออออออป" << endl;
    cout <<"บ1. บ Obtener la simetria de pearson       บ" << endl;
    cout <<"บ2. บ Obtener la simetria de Bowley        บ" << endl;
    cout <<"บ3. บ Obtener la simetria de Fisher        บ" << endl;
    cout <<"บ4. บ Ir a menu anterior                   บ" << endl;
    cout <<"ศอออสออออออออออออออออออออออออออออออออออออออผ" <<endl;

};
////////////////////////////////////////////////////////
void acercade()
{

    cout << "ษออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป" <<endl;
    cout << "บ       MHHMH      MHM     ;HM.  .HMHMHMA      MHMHMHMHMHM   HMHMHMHH.                                   บ" <<endl;
    cout << "บ     HHHHHHHHH    HHH     !HH    HHHHHHHHHM   HHHHHHHHHHH   HHHHHHHHHHH                                 บ" <<endl;
    cout << "บ    HHH    HHHH   HHH     !HH    HHH   .HHHQ  HHH           HHM     KHHH                                บ" <<endl;
    cout << "บ    HHH     HHH   HHH     !HH    HHH     HHH  HHH           HHH      HHH                                บ" <<endl;
    cout << "บ    MHHHH         HHH     !HH    HHH     HHH  HHH           HHH      HHH                                บ" <<endl;
    cout << "บ     KHHHHHHM     HHH     !HH    HHH++AHHHH:  HHHHHHHHHHH   HHMMHMHMHHH                                 บ" <<endl;
    cout << "บ       *HHHHHHH   HHH     !HH    HHHHHHHHH1   HHHHMHMHMHH   HHHHHHHHM                                   บ" <<endl;
    cout << "บ            HHH  .HHH     ]HH    HHH          HHH           HHH   HHHP                                  บ" <<endl;
    cout << "บ   HHHP     HHH   HHH     MHH    HHH          HHH           HHH    HHH+                                 บ" <<endl;
    cout << "บ    HHH;   ,HHM   MHHH   .HHH    HHH          HHH           HHH     HHH.                                บ" <<endl;
    cout << "บ     HHHHHHHHH     HHHHHHHHH.    HHH          HHHHHHHHHHH   HHM      HHH                                บ" <<endl;
    cout << "บ       MHMHH         HMHHHA      MHM          HMHMHMHMHMH   MHH      AMHH                               บ" <<endl;
    cout << "บ                                                                                                        บ" <<endl;
    cout << "บ            HHHHHHH     HHH     !HHH   HHH HHHHHHHHHHHM  HHHHHHHHHHH            HHH            6HHHQ    บ" <<endl;
    cout << "บ           MHHHHHHHH    HHH     !HHH   HHH HHHHHHHHHHHM  HHHHHHHHHHH           MHHH           HHHHHHM   บ" <<endl;
    cout << "บ          HHK    *HHH   HHH     !HHH   HHH      HHH      HHH                  MHHHH          MHH   HHH  บ" <<endl;
    cout << "บ          HHM           HHH     !HHH   HHH      HHH      HHH                HHHHHHM          HHH   HHH  บ" <<endl;
    cout << "บ          HHHHMH'       HHH     !HHH   HHH      HHH      HHH                MH  HHH          HHM   HHH  บ" <<endl;
    cout << "บ           QHHHHHHHM    HHH     !HHH   HHH      HHH      HHHHHHHHHH             HHH          HHH   HHH  บ" <<endl;
    cout << "บ              .MHHHHK   HHH     !HHH   HHH      HHH      HHH                    HHH          HHH   HHH  บ" <<endl;
    cout << "บ                  HHH   HHH     +HH1   HHH      HHH      HHH                    HHM          HHH   HHH  บ" <<endl;
    cout << "บ          HHH     HHH   HHH     HHH    HHH      HHH      HHH                    HHM          MHH   HHH  บ" <<endl;
    cout << "บ          HHHM   HHHH   MHHH:  MHHH    HHH      HHH      HHH!!!!!!!!            HHM     HH   HHH< QHHP  บ" <<endl;
    cout << "บ           HHHHHHHHH     HHHHHHHHM     HHH      HHH      HHHHHHHHHHH            HHM     HH    HHHHHHK   บ" <<endl;
    cout << "บ              MHH.          HHH<                                                                2HJ     บ" <<endl;
    cout << "บ                                                                                                        บ" << endl;
    cout << "บ        Super suite estadistica                                                                         บ" << endl;
    cout << "บ        Version 1.0                                                                                     บ" << endl;
    cout << "บ        Copyright c0 Grupo  2014                                                                        บ" << endl;
    cout << "บ                                                                                                        บ" << endl;
    cout << "บ                                                                                                        บ" << endl;
    cout << "บ                                                                                                        บ" << endl;
    cout << "บ       ษออออออออออออออออออออออออออออออออออออออหอออออออออออออออออป                                       บ" << endl;
    cout << "บ       บ  Este producto ha sido creado por:   บ  Carrera:       บ                                       บ" << endl;
    cout << "บ       ฬอออหออออออออออออออออออออออออออออออออออฮอออออออออออออออออน                                       บ" << endl;
    cout << "บ       บ*  บ Yonatan Orlando Cuervo Camargo   บ  ing. Sistemas  บ                                       บ" << endl;
    cout << "บ       บ*  บ Lopez Sierra Sergio Danilo       บ  ing. Sistemas  บ                                       บ" << endl;
    cout << "บ       บ*  บ Padilla Hernแndez Jahir Enrique  บ  Estadistica    บ                                       บ" << endl;
    cout << "บ       ศอออสออออออออออออออออออออออออออออออออออสอออออออออออออออออผ                                       บ" << endl;
    cout << "บ                                                                                                        บ" << endl;
    cout << "ศออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ" << endl;


};

void presentacion()
{
    cout << "ษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป" <<endl;
    cout << "บ                                                                                                 บ" << endl;
    cout << "บ              MMMM    MM    MM   MMMMMM   MMMMMMMM  MMMMMMM                                      บ" << endl;
    cout << "บ             MMMMMMM  MM    MM   MMMHMMM  MMHMMMMM  MMMMMMMM                                     บ" << endl;
    cout << "บ            MM    MM  MM    MM   MM   MMM MMM       MM    !MM                                    บ" << endl;
    cout << "บ            MMH'      MM    MM   MM   7MM MMM       MM    `MM                                    บ" << endl;
    cout << "บ             MMMMHM   MM    MM   MM((MMM' MMMMMMMM  MMMMMHMM                                     บ" << endl;
    cout << "บ               MMMMM  MM    MM   MMMMMMU  MMHMHMHM  MMMMMM                                       บ" << endl;
    cout << "บ            7M    MM  MM    HM   MM       MMM       MM   MM                                      บ" << endl;
    cout << "บ            MM    MM  MMM   MM   MM       MMM       MM    MM                                     บ" << endl;
    cout << "บ             MMMMMMM   MMMMMMM   MM       MMMMMMMM  MM    MMM                                    บ" << endl;
    cout << "บ              MMMH      MMMM`    MM       HMMMMMMM  MM     MMH                                   บ" << endl;
    cout << "บ                                                                                                 บ" << endl;
    cout << "บ               MMMMMM   MM    MM   MM MMMMMMMM  MMMMMMM         MM         MMMH                  บ" << endl;
    cout << "บ              MMM  MMM  MM    MM   MM '''MM'''  MH'''''        MMM        MM  MM`                บ" << endl;
    cout << "บ              MM    MM  MM    MM   MM    MM     MM            MMMM       MMI   MM                บ" << endl;
    cout << "บ              MMMMH     MM    MM   MM    MM     MM            M MM       MM    MM                บ" << endl;
    cout << "บ               7MMMMM   MM    MM   MM    MM     MMMMMMM         MM       MM    MM                บ" << endl;
    cout << "บ                   HMM  MM    MM   MM    MM     MM              MM       MM    MM                บ" << endl;
    cout << "บ              MM    MM  MM    MM   MM    MM     MM              MM       MM    MM                บ" << endl;
    cout << "บ              HMM  (MM  MMM  :MM   MM    MM     MM              MM    MH  MM  MMM                บ" << endl;
    cout << "บ               HMMMMM    MMMMMM'   MM    MM     MMMMMMMM        MM    MM   MMMMM                 บ" << endl;
    cout << "บ                                                                                                 บ" << endl;
    cout << "ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ" << endl;

};


void analisis_completo(double* x , int n)
{

    cout << "ษออออออออออออออออออออออออออออออออออออออออออออออออออออออ" <<endl;
    cout << "บ el valor maximo de los datos es: " <<max(x, n)<<"              "<< endl;
    cout<<"ฬออออออออออออออออออออออออออออออออออออออออออออออออออออออ"<<endl;
    cout << "บ el valor minimo de los datos es: " << min(x, n) <<"              "<< endl;
    cout<<"ฬออออออออออออออออออออออออออออออออออออออออออออออออออออออ"<<endl;
    cout << "บ El rango de los datos es " <<rango(x, n) <<"                       "<< endl;
    cout<<"ฬออออออออออออออออออออออออออออออออออออออออออออออออออออออ"<<endl;
    cout<<"บ la media es:  "<<media( x, n)<<"                               "<<endl;
    cout<<"ฬออออออออออออออออออออออออออออออออออออออออออออออออออออออ"<<endl;
    cout << "บ La media geometrica es : " << media_geometrica(x, n)<<"                 "<< endl;
    cout<<"ฬออออออออออออออออออออออออออออออออออออออออออออออออออออออ"<<endl;
    cout << "บ La media armonica es : " << media_armonica(x, n) <<"                   "<< endl;
    cout<<"ฬออออออออออออออออออออออออออออออออออออออออออออออออออออออ"<<endl;
    cout << "บ La mediana es :" <<mediana(x, n) <<"                               "<< endl;
    cout<<"ฬออออออออออออออออออออออออออออออออออออออออออออออออออออออ"<<endl;
    cout << "บ La moda es  : " << moda(x, n)<<"                                 "<< endl;
    cout<<"ฬออออออออออออออออออออออออออออออออออออออออออออออออออออออ"<<endl;
    cout << "บ La varianza es  : " << varianza(x, n)<<"                        "<< endl;
    cout<<"ฬออออออออออออออออออออออออออออออออออออออออออออออออออออออ"<<endl;
    cout << "บ La desviacion estandar es  : " <<desviacion_estandar(x, n)<<"             "<< endl;
    cout<<"ฬออออออออออออออออออออออออออออออออออออออออออออออออออออออ"<<endl;
    cout << "บ los cuartiles son: "<<"                                  "<< endl;
    cout <<"บ                                                      "<<endl;
    cout<<"บ cuartil 1    "<<cuartil(x, n, 1)<<"                                  "<<endl;
    cout <<"บ                                                      "<<endl;
    cout<<"บ cuartil 2    "<<cuartil(x, n, 2)<<"                                  "<<endl;
    cout <<"บ                                                      "<<endl;
    cout<<"บ cuartil 3    "<<cuartil(x, n, 3)<<"                                  "<<endl;
    cout<<"ฬออออออออออออออออออออออออออออออออออออออออออออออออออออออ"<<endl;
    cout << "บ El rango intercuartilico es  : " <<rango_intercuartilico(x, n)<<"                 "<< endl;
    cout<<"ฬออออออออออออออออออออออออออออออออออออออออออออออออออออออ"<<endl;
    cout << "บ El limite superior es : " <<limite_superior(x, n)<<"                      "<< endl;
    cout<<"ฬออออออออออออออออออออออออออออออออออออออออออออออออออออออ"<<endl;
    cout << "บ El limite inferior es  : " <<limite_inferior(x, n)<<"                     "<< endl;
    cout<<"ฬออออออออออออออออออออออออออออออออออออออออออออออออออออออ"<<endl;
    cout<<"บ La asimetria de Pearson es:  "<<asimetria_pearson(x, n)<<"           "<<endl;
    cout <<"บ                                                      "<<endl;
    if(asimetria_pearson(x,n)==0)
    {
        cout<<"บ La distribucion es simetrica                                               "<<endl;
        cout <<"บ                                                      "<<endl;
    };
    if(asimetria_pearson(x,n)>0)
    {
        cout<<"บ la distribucion tiene un sesgo hacia la derecha"<<"      "<<endl;
        cout <<"บ                                                      "<<endl;
    };
    if(asimetria_pearson(x,n)<0)
    {
        cout<<"บ la distribucion tiene un sesgo hacia la izquierda"<<"    "<<endl;
        cout <<"บ                                                      "<<endl;
    };
    cout<<"ฬออออออออออออออออออออออออออออออออออออออออออออออออออออออ"<<endl;
    cout<<"บ La asimetria de Bowley es:  "<<asimetria_bowley(x, n)<<"            "<<endl;
    cout <<"บ                                                      "<<endl;
    if(asimetria_bowley(x,n)==0)
    {
        cout<<"บ La distribucion es simetrica                          "<<endl;
        cout <<"บ                                                      "<<endl;
    };
    if(asimetria_bowley(x,n)>0)
    {
        cout<<"บ la distribucion tiene un sesgo hacia la derecha      "<<endl;
        cout <<"บ                                                      "<<endl;
    };
    if(asimetria_bowley(x,n)<0)
    {
        cout<<"บ la distribucion tiene un sesgo hacia la izquierda    "<<endl;
        cout <<"บ                                                      "<<endl;
    };
    cout<<"ฬออออออออออออออออออออออออออออออออออออออออออออออออออออออ"<<endl;
    cout<<"บ La asimetria de Fisher es:  "<<asimetria_fisher(x, n)<<"            "<<endl;
    cout <<"บ                                                      "<<endl;
    if(asimetria_fisher(x,n)==0)
    {
        cout<<"บ La distribucion es simetrica                         "<<endl;
        cout <<"บ                                                      "<<endl;
    };
    if(asimetria_fisher(x,n)>0)
    {
        cout<<"บ la distribucion tiene un sesgo hacia la derecha      "<<endl;
        cout <<"บ                                                      "<<endl;
    };
    if(asimetria_fisher(x,n)<0)
    {
        cout<<"บ la distribucion tiene un sesgo hacia la izquierda    "<<endl;
        cout <<"บ                                                      "<<endl;
    };
    cout<<"ฬออออออออออออออออออออออออออออออออออออออออออออออออออออออ"<<endl;
    cout << "บ Coeficiente de apuntamiento es  : " <<coeficiente_apuntamiento(x, n)<<"        " << endl;
    cout <<"บ                                                      "<<endl;
    if(coeficiente_apuntamiento(x,n)==3)
    {
        cout<<"บ La distribucion es mesocurticaบ                      "<<endl;
        cout <<"บ                                                      "<<endl;
    };
    if(coeficiente_apuntamiento(x,n)>3)
    {
        cout<<"บ la distribucion es leptocurtica                      "<<endl;
        cout <<"บ                                                      "<<endl;
    };
    if(coeficiente_apuntamiento(x,n)<3)
    {
        cout<<"บ la distribucion es platicurtica                      "<<endl;
        cout <<"บ                                                      "<<endl;
    };
    cout<<"ศออออออออออออออออออออออออออออออออออออออออออออออออออออออ"<<endl;
    cout<<endl;
    cout << "El diagrama de cajas y bigotes que resume los datos es " << endl;
    cout <<endl;
    cout <<endl;
    cout <<endl;
    boxplot(cout,x,n);
};

