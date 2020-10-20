#include <iostream>
#include <math.h>

using namespace std;

float X(float xi, float vi, float angulo, float t);
float Y(float yi, float vi, float angulo, float t);
float Velocidad_Defensa(float, float, int);
int main()
{
     //COORDENADAS DE LOS CAÑONES----------------------------------------------------------
    int coordenadasO[2]={0,0}, coordenadasD[2];
    float anguloO, anguloD = 0;
    float velO= 0, velD= 0;
    bool attack = false;

    cout << "ingrese la altura del cañon ofensivo: " << endl;
    cin >> coordenadasO[1];

    for(int i = 0; i<2;i++){
        cout << "ingrese la coordenada " << i << " del cañon defensivo: " << endl;
        cin >> coordenadasD[i];

    }
    int *a = coordenadasO; //puntero ofensivo
    int *b = coordenadasD; //puntero defensivo

    int dis = *b;
    cout << endl;


    // CASOS------------------------------------------------------------------------------

    int op= 9;
    while (op != 0){
        cout << "*******************INICIANDO SIMULACION**************" << endl;
        cout << "ingrese 1 para simular el caso 1" << endl;
        cout << "ingrese 2 para simular el caso 2" << endl;
        cout << "ingrese 3 para simular el caso 3" << endl;

        cout << "ingrese 0 para finalizar la simulacion" << '\n' << endl;
        cin >> op;
        switch (op) {
        case 1:{
           cout << "ingrese el angulo con el que lanzara el misil atancante: ";
           cin >> anguloO;

           int x, y;
           for(int i= 0; i <=3; i++){
               int Vi = 0, Vf = 0, intervalo = 0;
               cout << "ingrese la velocidad minima: ";
               cin >> Vi;
               cout << "ingrese la velocidad maxima: ";
               cin >> Vf;
               cout << "ingrese el intervalo de la suma: ";
               cin >>intervalo;

               for(int velO = Vi; velO <=Vf; velO +=intervalo){
                   for(float t = 0; t<=1000; t+= 1){
                       x = X(*a, velO, anguloO, t);
                       y = Y(*(a+1), velO, anguloO, t);

                       if((sqrt(pow(*b, 2)+pow(*(b+1), 2))- sqrt(pow(x, 2)+pow(y,2))) <= 0.05*(*b)){
                           cout << "disparo que compromete la integridad del Canion defensivo: " << endl;
                           cout << "velocidad: " << velO << endl;
                           cout << "angulo: " << anguloO << endl;
                           cout << "tiempo: " << t << endl;
                       }
                       else{
                           cout << "disparo no efectivo con los parameros ingresados" << endl;
                           cout << "velocidad: " << velO << endl;
                           cout << "angulo: " << anguloO << endl;
                           cout << "tiempo: " << t << endl;
                       }
                  }
               }

            }
           break;
        }
        case 2:{


            break;
        }
        case 3:{


            int NumDisparos = 0;

            cout << "Ingrese el numero de disparos que va a realizar: " << endl;
            cin >> NumDisparos;

            for(int i = 1; i <= NumDisparos; i++ ){
                cout << "ingrese el angulo del ataque para el lanzamiento " << i  << endl;
                cin >> anguloO;
                anguloO = (anguloO*3.1416)/180;
                cout << "ingrese la velocidad inicial del ataque numero:  " << i << endl;
                cin >> velO;


                int x = 0;
                int y = 0;
                float cont = 0;
                for(float t = 0; t<=1000; t+= 0.5){
                    x = X(*a, velO, anguloO, t);
                    y = Y(*(a+1), velO, anguloO, t);

                    if(*b <= x+(0.05*dis)){
                        cout << "----------------¡ALERTA DE MISIL!-------------------------------" << endl;
                        attack = true;
                    }

                    else{
                        cout << "sin alerta de misil" << endl;
                    }
                    cont +=0.5;

                    if(attack == true){
                        cout << "los parametros de la simulacion fueron: " << endl;
                        cout << "la explosion fue en las coordenadas: ("<<x<<','<<y<<')' << endl;
                        cout << "En un tiempo: t= " << cont << endl;
                        cout << "la distacia recorrida por el misil ofensivo fue: "<< x << " horizontal y " << y << " vertical"<< endl;
                        cout << "la distacia recorrida por el misil defensivo fue: "<< dis-x << " horizontal y " << y-*(b+1) << " vertical"<< endl;

                        cout << '\n' << '\n' <<'\n' << endl;
                        attack = false;
                        break;
                    }

                }
            }
            break;
        }
        case 4:{
            break;
        }

        }
    }
}

float X(float xi, float vi, float angulo, float t){
    float x = 0.0;
    x = xi + vi*(cos(angulo))*(t);
    return x;
}

float Y(float yi, float vi, float angulo, float t){
    float y = 0;
    y = yi + (vi*(sin(angulo))*(t)) + (0.5*(9.8)*(t*t));
    return y;
}


float Velocidad_Defensa(float anguloD, float t, int *a){
    int VelD = 0;
    VelD =  (*(a+1))/(t+2)*cos(anguloD);
    return VelD;

}
