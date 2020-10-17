#include <iostream>
#include <math.h>

using namespace std;

int X(int, int, int, int);
int Y(int, int, int, int);

int XD(int, int);
int YD(int, int);

int main()
{
     //COORDENADAS DE LOS CAÑONES----------------------------------------------------------
    int coordenadasO[2]={0,0}, coordenadasD[2];
    int anguloO, anguloD = 0, velO= 0, velD= 0;
    bool attack = false;

    cout << "ingrese la altura del cañon ofensivo: " << endl;
    cin >> coordenadasO[1];
    cout << "ingrese el angulo del cañon ofensivo: " << endl;
    cin >> anguloO;
    cout << "ingrese la velocidad inicial del cañon ofensivo: " << endl;
    cin >> velO;

    for(int i = 0; i<2;i++){
        cout << "ingrese la coordenada " << i << " del cañon defensivo: " << endl;
        cin >> coordenadasD[i];

    }
    int *a = coordenadasO; //puntero ofensivo
    int *b = coordenadasD; //puntero defensivo

    int dis = coordenadasD[0];
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
           //generar disparos (al menos tres) ofesnsivos que comprometan la integridad del cañon defensivo
            int x = 0;
            int y = 0;
            for(int t = 1; t<=5; t++){
                x = X(*a, velD, anguloD, t);
                y = Y(*(a+1), velD, anguloD, t);

                if(*b <= x+(0.05*dis) or y-(0.05*dis) >= *(b+1)){
                    cout << "----------------¡ALERTA DE MISIL!-------------------------------" << endl;
                    attack = true;
                }
                else{
                    cout << "sin alerta de misil";
                }

                // DEFENSA DEL CAÑON DEFENSIVO---------------------------------------------------------
                if(attack == true){
                    cout << "los parametros: " << endl;
                    cout << "la exploxion fue en las coordenadas: ("<<x<<','<<y<<')' << endl;
                    cout << "En un tiempo"


                }

            }


            break;
        }
        case 2:{
            break;
        }
        case 3:{
            break;
        }
        }
    }
}

int X(int xi, int vi, int angulo, int t){
    int x = 0;
    x = xi + vi*(sin(angulo))*(t);
    return x;
}

int Y(int yi, int vi, int angulo, int t){
    int y = 0;
    y = yi + (vi*(cos(angulo))*(t)) + (0.5*(9.8)*(t*t));
    return y;
}


int  XD(int x, int t){

    }


int YD(int y, int t){

}

