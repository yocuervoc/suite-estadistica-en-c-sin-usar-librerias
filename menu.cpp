#include "unarray.h"
#include "unstatistic.h"
#include "menu.h"
void menu_principal()
{
    cout << "��������������������������������������������������������������������������ͻ" <<endl;
    cout << "� Por favor, escoja alguna de las opciones que se presentan a continuacion:�" << endl;
    cout << "� 1. Realizar analisis estadistico discreto                                �" << endl;
    cout << "� 2. Realizar calculos de combiciones y permutaciones                      �" << endl;
    cout << "� 3. Calcular densidad de la distribucion normal                           �" << endl;
    cout << "� 4. Realizar ajuste lineal                                                �" << endl;
    cout << "� 5. Ayuda                                                                 �" << endl;
    cout << "� 6. Acerca de                                                             �" << endl;
    cout << "� 7. Salir                                                                 �" << endl;
    cout << "��������������������������������������������������������������������������ͼ" <<endl;

};
//////////////////////////////////////////////////////////////////////////////////////7
/////////////////////////// PRESENTACION///////////////////////////////////////////////

void slogan()
{
    cout<<"\n\n"<<endl;
    cout<<"\t\t     ����������������������������������������������������������������������������ͻ"<<endl;
    cout<<"\t             �\t����������������������������������������������������������������������ͻ  �"<<endl;
    cout<<"\t             �\t�\t\t                                                       �  � "<<endl;
    cout<<"\t             �\t�\t\t                                                       �  �"<<endl;
    cout<<"\t             �\t�\t\t  7MH              MHM HMHMHMHMHMHMHMHM                �  �"<<endl;
    cout<<"\t             �\t�\t\t  (HM              HMH MHMHMH        MHMM              �  �"<<endl;
    cout<<"\t             �\t�\t\t  7HM              HMH MHMH            MHM             �  �"<<endl;
    cout<<"\t             �\t�\t\t  (MH              MHM HMHM            MHM             �  �"<<endl;
    cout<<"\t             �\t�\t\t  7HM              HMH MHM              HM             �  �"<<endl;
    cout<<"\t             �\t�\t\t   HM7            HMHM HMH              MH             �  �"<<endl;
    cout<<"\t             �\t�\t\t   MHM            HMHM HMH               M             �  �"<<endl;
    cout<<"\t             �\t�\t\t    MHMM       (MHMHMH MHM               M             �  �"<<endl;
    cout<<"\t             �\t�\t\t      MHMHMHMHMHMHMHMH MHM              HM             �  �"<<endl;
    cout<<"\t             �\t�\t\t                                                       �  �"<<endl;
    cout<<"\t             �\t�\t\t                                                       �  �"<<endl;
    cout<<"\t\t     �\t����������������������������������������������������������������������ͼ  �"<<endl;
    cout<<"\t\t     ����������������������������������������������������������������������������ͼ"<<endl;
    cout<<"\n"<<endl;

    cout<<" ������������������������������������������� UNIVERSIDAD NACIONAL DE COLOMBIA �����������������������������������������"<<endl;
    cout<<" ����������������������������������� PROGRAMACION DE COMPUTARES -- SUITE ESTADISTICA ����������������������������������"<<endl;
    cout<<"\n\n"<<endl;
};
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////MENU DE ANALISIS ESTADISTICO////////////////////////
void menu_estadistico()
{
    cout<<endl;
    cout<<endl;
    cout <<"����������������������������������������������������ͻ"<<endl;
    cout << "�1.  � Para optener valor maximo                     �" << endl;
    cout << "�2.  � Para optener valor minimo                     �" << endl;
    cout << "�3.  � Para optener el rango                         �" << endl;
    cout << "�4.  � Para optener la media                         �" << endl;
    cout << "�5.  � Para optener la media geometrica              �" << endl;
    cout << "�6.  � Para optener la media armonica                �" << endl;
    cout << "�7.  � Para optener la mediana                       �" << endl;
    cout << "�8.  � Para optener la moda                          �" << endl;
    cout << "�9.  � Para optener la varianza                      �" << endl;
    cout << "�10. � Para optener la desviacion estandar           �" << endl;
    cout << "�11. � Para optener los cuartiles                    �" << endl;
    cout << "�12. � Para optener el rango intercuartilico         �" << endl;
    cout << "�13. � Para optener el limite superior para atipicos �" << endl;
    cout << "�14. � Para optener el limite inferior para atipicos �" << endl;
    cout << "�15. � Para optener el coeficiente de asimetria      �" << endl;
    cout << "�16. � Para optener el coeficionete de apuntamiento  �" << endl;
    cout << "�17. � Para dibujar el diagrama de cajas y bigotes   �" << endl;
    cout << "�18. � Para realizar analisis descriptivo completo   �" << endl;
    cout << "�19. � Para ir a menu principal                      �"<<endl;
    cout <<"����������������������������������������������������ͼ"<<endl;
};
void menu_ayuda()
{
    cout<<endl;
    cout<<endl;
    cout << "�������������������������������������������������������������������������ͻ            " <<endl;

    cout << "� 1. Realizar analisis estadisticos discreto <���������������������������������������ͻ" << endl;
    cout << "� 2. Realizar calculos de combinaciones y permutaciones                   �           �" << endl;
    cout << "� 3. Calcular distribucion normal                                         �           �" << endl;
    cout << "� 4. Realizar ajuste lineal                                               �           �" << endl;
    cout << "� 5. Ayuda                                                                �           �" << endl;
    cout << "� 6. Acerca de                                                            �           �" << endl;
    cout << "� 7. Salir                                                                �           �" << endl;
    cout << "�������������������������������������������������������������������������ͼ           �" <<endl;

    cout <<"                                                                                      �"<<endl;


    cout <<"��������������������������������������������������ͻ                                  �"<<endl;
    cout << "�1.  Para optener valor maximo                     �                                  �" << endl;
    cout << "�2.  Para optener valor minimo                     �                                  �" << endl;
    cout << "�3.  Para optener el rango                         �                                  �" << endl;
    cout << "�4.  Para optener la media                         �                                  �" << endl;
    cout << "�5.  Para optener la media geometrica              �                                  �" << endl;
    cout << "�6.  Para optener la media armonica                �                                  �" << endl;
    cout << "�7.  Para optener la mediana                       �                                  �" << endl;
    cout << "�8.  Para optener la moda                          �                                  �" << endl;
    cout << "�9.  Para optener la varianza                      ����������������������������������ͼ" << endl;
    cout << "�10. Para optener la desviacion estandar           �" << endl;
    cout << "�11. Para optener los cuartiles                    �" << endl;
    cout << "�12. Para optener el rango intercuartilico         �" << endl;
    cout << "�13. Para optener el limite superior               �" << endl;
    cout << "�14. Para optener el limite inferior               �" << endl;
    cout << "�15. Para optener la asimetria  <��������������������������������������������ͻ" << endl;
    cout << "�16. Para optener el coeficionete de apuntamiento  �                          �" << endl;
    cout << "�17. Para dibujar el diagrama de cajas y bigotes   �                          �" << endl;
    cout << "�18. Para realizar analisis descriptivo completo   �                          �" << endl;
    cout << "�19. Para salir                                    �                          �"<<endl;
    cout <<"��������������������������������������������������ͼ                          �"<<endl;
    cout <<"                                                                              �"<<endl;
    cout <<"                                                ����������������������������������������������������ͻ " << endl;
    cout <<"                                                �1. � Obtener la simetria de pearson                 �" << endl;
    cout <<"                                                �2. � Obtener la simetria de Bowley                  �" << endl;
    cout <<"                                                �3. � Obtener la simetria de Fisher                  �" << endl;
    cout <<"                                                �4. � Salir                                          �" << endl;
    cout <<"                                                ����������������������������������������������������ͼ" <<endl;


};
///////////////////////////////////////////////////////////////////////////////////////////////////////////77
void menu_combi()
{
    cout<<"�����������������������������ͻ"<<endl;
    cout<<"�  Escoja la opcion  deseada  �"<<endl;
    cout<<"�����������������������������͹"<<endl;
    cout<<"�1. � Realizar permutacion    �"<<endl;
    cout<<"�2. � Realizar combinacion    �"<<endl;
    cout<<"�3. � Ir a menu principal     �"<<endl;
    cout<<"�����������������������������ͼ"<<endl;
};

void menu_asimetria()
{
    cout <<"������������������������������������������ͻ" << endl;
    cout <<"�1. � Obtener la simetria de pearson       �" << endl;
    cout <<"�2. � Obtener la simetria de Bowley        �" << endl;
    cout <<"�3. � Obtener la simetria de Fisher        �" << endl;
    cout <<"�4. � Ir a menu anterior                   �" << endl;
    cout <<"������������������������������������������ͼ" <<endl;

};
////////////////////////////////////////////////////////
void acercade()
{

    cout << "��������������������������������������������������������������������������������������������������������ͻ" <<endl;
    cout << "�       MHHMH      MHM     ;HM.  .HMHMHMA      MHMHMHMHMHM   HMHMHMHH.                                   �" <<endl;
    cout << "�     HHHHHHHHH    HHH     !HH    HHHHHHHHHM   HHHHHHHHHHH   HHHHHHHHHHH                                 �" <<endl;
    cout << "�    HHH    HHHH   HHH     !HH    HHH   .HHHQ  HHH           HHM     KHHH                                �" <<endl;
    cout << "�    HHH     HHH   HHH     !HH    HHH     HHH  HHH           HHH      HHH                                �" <<endl;
    cout << "�    MHHHH         HHH     !HH    HHH     HHH  HHH           HHH      HHH                                �" <<endl;
    cout << "�     KHHHHHHM     HHH     !HH    HHH++AHHHH:  HHHHHHHHHHH   HHMMHMHMHHH                                 �" <<endl;
    cout << "�       *HHHHHHH   HHH     !HH    HHHHHHHHH1   HHHHMHMHMHH   HHHHHHHHM                                   �" <<endl;
    cout << "�            HHH  .HHH     ]HH    HHH          HHH           HHH   HHHP                                  �" <<endl;
    cout << "�   HHHP     HHH   HHH     MHH    HHH          HHH           HHH    HHH+                                 �" <<endl;
    cout << "�    HHH;   ,HHM   MHHH   .HHH    HHH          HHH           HHH     HHH.                                �" <<endl;
    cout << "�     HHHHHHHHH     HHHHHHHHH.    HHH          HHHHHHHHHHH   HHM      HHH                                �" <<endl;
    cout << "�       MHMHH         HMHHHA      MHM          HMHMHMHMHMH   MHH      AMHH                               �" <<endl;
    cout << "�                                                                                                        �" <<endl;
    cout << "�            HHHHHHH     HHH     !HHH   HHH HHHHHHHHHHHM  HHHHHHHHHHH            HHH            6HHHQ    �" <<endl;
    cout << "�           MHHHHHHHH    HHH     !HHH   HHH HHHHHHHHHHHM  HHHHHHHHHHH           MHHH           HHHHHHM   �" <<endl;
    cout << "�          HHK    *HHH   HHH     !HHH   HHH      HHH      HHH                  MHHHH          MHH   HHH  �" <<endl;
    cout << "�          HHM           HHH     !HHH   HHH      HHH      HHH                HHHHHHM          HHH   HHH  �" <<endl;
    cout << "�          HHHHMH'       HHH     !HHH   HHH      HHH      HHH                MH  HHH          HHM   HHH  �" <<endl;
    cout << "�           QHHHHHHHM    HHH     !HHH   HHH      HHH      HHHHHHHHHH             HHH          HHH   HHH  �" <<endl;
    cout << "�              .MHHHHK   HHH     !HHH   HHH      HHH      HHH                    HHH          HHH   HHH  �" <<endl;
    cout << "�                  HHH   HHH     +HH1   HHH      HHH      HHH                    HHM          HHH   HHH  �" <<endl;
    cout << "�          HHH     HHH   HHH     HHH    HHH      HHH      HHH                    HHM          MHH   HHH  �" <<endl;
    cout << "�          HHHM   HHHH   MHHH:  MHHH    HHH      HHH      HHH!!!!!!!!            HHM     HH   HHH< QHHP  �" <<endl;
    cout << "�           HHHHHHHHH     HHHHHHHHM     HHH      HHH      HHHHHHHHHHH            HHM     HH    HHHHHHK   �" <<endl;
    cout << "�              MHH.          HHH<                                                                2HJ     �" <<endl;
    cout << "�                                                                                                        �" << endl;
    cout << "�        Super suite estadistica                                                                         �" << endl;
    cout << "�        Version 1.0                                                                                     �" << endl;
    cout << "�        Copyright c0 Grupo  2014                                                                        �" << endl;
    cout << "�                                                                                                        �" << endl;
    cout << "�                                                                                                        �" << endl;
    cout << "�                                                                                                        �" << endl;
    cout << "�       ��������������������������������������������������������ͻ                                       �" << endl;
    cout << "�       �  Este producto ha sido creado por:   �  Carrera:       �                                       �" << endl;
    cout << "�       ��������������������������������������������������������͹                                       �" << endl;
    cout << "�       �*  � Yonatan Orlando Cuervo Camargo   �  ing. Sistemas  �                                       �" << endl;
    cout << "�       �*  � Lopez Sierra Sergio Danilo       �  ing. Sistemas  �                                       �" << endl;
    cout << "�       �*  � Padilla Hern�ndez Jahir Enrique  �  Estadistica    �                                       �" << endl;
    cout << "�       ��������������������������������������������������������ͼ                                       �" << endl;
    cout << "�                                                                                                        �" << endl;
    cout << "��������������������������������������������������������������������������������������������������������ͼ" << endl;


};

void presentacion()
{
    cout << "�������������������������������������������������������������������������������������������������ͻ" <<endl;
    cout << "�                                                                                                 �" << endl;
    cout << "�              MMMM    MM    MM   MMMMMM   MMMMMMMM  MMMMMMM                                      �" << endl;
    cout << "�             MMMMMMM  MM    MM   MMMHMMM  MMHMMMMM  MMMMMMMM                                     �" << endl;
    cout << "�            MM    MM  MM    MM   MM   MMM MMM       MM    !MM                                    �" << endl;
    cout << "�            MMH'      MM    MM   MM   7MM MMM       MM    `MM                                    �" << endl;
    cout << "�             MMMMHM   MM    MM   MM((MMM' MMMMMMMM  MMMMMHMM                                     �" << endl;
    cout << "�               MMMMM  MM    MM   MMMMMMU  MMHMHMHM  MMMMMM                                       �" << endl;
    cout << "�            7M    MM  MM    HM   MM       MMM       MM   MM                                      �" << endl;
    cout << "�            MM    MM  MMM   MM   MM       MMM       MM    MM                                     �" << endl;
    cout << "�             MMMMMMM   MMMMMMM   MM       MMMMMMMM  MM    MMM                                    �" << endl;
    cout << "�              MMMH      MMMM`    MM       HMMMMMMM  MM     MMH                                   �" << endl;
    cout << "�                                                                                                 �" << endl;
    cout << "�               MMMMMM   MM    MM   MM MMMMMMMM  MMMMMMM         MM         MMMH                  �" << endl;
    cout << "�              MMM  MMM  MM    MM   MM '''MM'''  MH'''''        MMM        MM  MM`                �" << endl;
    cout << "�              MM    MM  MM    MM   MM    MM     MM            MMMM       MMI   MM                �" << endl;
    cout << "�              MMMMH     MM    MM   MM    MM     MM            M MM       MM    MM                �" << endl;
    cout << "�               7MMMMM   MM    MM   MM    MM     MMMMMMM         MM       MM    MM                �" << endl;
    cout << "�                   HMM  MM    MM   MM    MM     MM              MM       MM    MM                �" << endl;
    cout << "�              MM    MM  MM    MM   MM    MM     MM              MM       MM    MM                �" << endl;
    cout << "�              HMM  (MM  MMM  :MM   MM    MM     MM              MM    MH  MM  MMM                �" << endl;
    cout << "�               HMMMMM    MMMMMM'   MM    MM     MMMMMMMM        MM    MM   MMMMM                 �" << endl;
    cout << "�                                                                                                 �" << endl;
    cout << "�������������������������������������������������������������������������������������������������ͼ" << endl;

};


void analisis_completo(double* x , int n)
{

    cout << "�������������������������������������������������������" <<endl;
    cout << "� el valor maximo de los datos es: " <<max(x, n)<<"              "<< endl;
    cout<<"�������������������������������������������������������"<<endl;
    cout << "� el valor minimo de los datos es: " << min(x, n) <<"              "<< endl;
    cout<<"�������������������������������������������������������"<<endl;
    cout << "� El rango de los datos es " <<rango(x, n) <<"                       "<< endl;
    cout<<"�������������������������������������������������������"<<endl;
    cout<<"� la media es:  "<<media( x, n)<<"                               "<<endl;
    cout<<"�������������������������������������������������������"<<endl;
    cout << "� La media geometrica es : " << media_geometrica(x, n)<<"                 "<< endl;
    cout<<"�������������������������������������������������������"<<endl;
    cout << "� La media armonica es : " << media_armonica(x, n) <<"                   "<< endl;
    cout<<"�������������������������������������������������������"<<endl;
    cout << "� La mediana es :" <<mediana(x, n) <<"                               "<< endl;
    cout<<"�������������������������������������������������������"<<endl;
    cout << "� La moda es  : " << moda(x, n)<<"                                 "<< endl;
    cout<<"�������������������������������������������������������"<<endl;
    cout << "� La varianza es  : " << varianza(x, n)<<"                        "<< endl;
    cout<<"�������������������������������������������������������"<<endl;
    cout << "� La desviacion estandar es  : " <<desviacion_estandar(x, n)<<"             "<< endl;
    cout<<"�������������������������������������������������������"<<endl;
    cout << "� los cuartiles son: "<<"                                  "<< endl;
    cout <<"�                                                      "<<endl;
    cout<<"� cuartil 1    "<<cuartil(x, n, 1)<<"                                  "<<endl;
    cout <<"�                                                      "<<endl;
    cout<<"� cuartil 2    "<<cuartil(x, n, 2)<<"                                  "<<endl;
    cout <<"�                                                      "<<endl;
    cout<<"� cuartil 3    "<<cuartil(x, n, 3)<<"                                  "<<endl;
    cout<<"�������������������������������������������������������"<<endl;
    cout << "� El rango intercuartilico es  : " <<rango_intercuartilico(x, n)<<"                 "<< endl;
    cout<<"�������������������������������������������������������"<<endl;
    cout << "� El limite superior es : " <<limite_superior(x, n)<<"                      "<< endl;
    cout<<"�������������������������������������������������������"<<endl;
    cout << "� El limite inferior es  : " <<limite_inferior(x, n)<<"                     "<< endl;
    cout<<"�������������������������������������������������������"<<endl;
    cout<<"� La asimetria de Pearson es:  "<<asimetria_pearson(x, n)<<"           "<<endl;
    cout <<"�                                                      "<<endl;
    if(asimetria_pearson(x,n)==0)
    {
        cout<<"� La distribucion es simetrica                                               "<<endl;
        cout <<"�                                                      "<<endl;
    };
    if(asimetria_pearson(x,n)>0)
    {
        cout<<"� la distribucion tiene un sesgo hacia la derecha"<<"      "<<endl;
        cout <<"�                                                      "<<endl;
    };
    if(asimetria_pearson(x,n)<0)
    {
        cout<<"� la distribucion tiene un sesgo hacia la izquierda"<<"    "<<endl;
        cout <<"�                                                      "<<endl;
    };
    cout<<"�������������������������������������������������������"<<endl;
    cout<<"� La asimetria de Bowley es:  "<<asimetria_bowley(x, n)<<"            "<<endl;
    cout <<"�                                                      "<<endl;
    if(asimetria_bowley(x,n)==0)
    {
        cout<<"� La distribucion es simetrica                          "<<endl;
        cout <<"�                                                      "<<endl;
    };
    if(asimetria_bowley(x,n)>0)
    {
        cout<<"� la distribucion tiene un sesgo hacia la derecha      "<<endl;
        cout <<"�                                                      "<<endl;
    };
    if(asimetria_bowley(x,n)<0)
    {
        cout<<"� la distribucion tiene un sesgo hacia la izquierda    "<<endl;
        cout <<"�                                                      "<<endl;
    };
    cout<<"�������������������������������������������������������"<<endl;
    cout<<"� La asimetria de Fisher es:  "<<asimetria_fisher(x, n)<<"            "<<endl;
    cout <<"�                                                      "<<endl;
    if(asimetria_fisher(x,n)==0)
    {
        cout<<"� La distribucion es simetrica                         "<<endl;
        cout <<"�                                                      "<<endl;
    };
    if(asimetria_fisher(x,n)>0)
    {
        cout<<"� la distribucion tiene un sesgo hacia la derecha      "<<endl;
        cout <<"�                                                      "<<endl;
    };
    if(asimetria_fisher(x,n)<0)
    {
        cout<<"� la distribucion tiene un sesgo hacia la izquierda    "<<endl;
        cout <<"�                                                      "<<endl;
    };
    cout<<"�������������������������������������������������������"<<endl;
    cout << "� Coeficiente de apuntamiento es  : " <<coeficiente_apuntamiento(x, n)<<"        " << endl;
    cout <<"�                                                      "<<endl;
    if(coeficiente_apuntamiento(x,n)==3)
    {
        cout<<"� La distribucion es mesocurtica�                      "<<endl;
        cout <<"�                                                      "<<endl;
    };
    if(coeficiente_apuntamiento(x,n)>3)
    {
        cout<<"� la distribucion es leptocurtica                      "<<endl;
        cout <<"�                                                      "<<endl;
    };
    if(coeficiente_apuntamiento(x,n)<3)
    {
        cout<<"� la distribucion es platicurtica                      "<<endl;
        cout <<"�                                                      "<<endl;
    };
    cout<<"�������������������������������������������������������"<<endl;
    cout<<endl;
    cout << "El diagrama de cajas y bigotes que resume los datos es " << endl;
    cout <<endl;
    cout <<endl;
    cout <<endl;
    boxplot(cout,x,n);
};

