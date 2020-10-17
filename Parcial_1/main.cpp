#include <iostream>
#include <math.h>

using namespace std;

int tayectoria_X(int, int, int);
int rayectoria_Y(int, int, int);


int main()
{
     //COORDENADAS DE LOS CAÑONES----------------------------------------------------------
    int coordenadasO[2]={0,0}, coordenadasD[2];
    int anguloO, anguloD;

    cout << "ingrese la altura del cañon ofensivo: " << endl;
    cin >> coordenadasO[1];
    cout << "ingrese el angulo del cañon ofensivo: " << endl;
    cin >> anguloO;
    cout << "ingrese la velocidad inicial del cañon ofensivo: " << endl;


    for(int i = 0; i<2;i++){
        cout << "ingrese la coordenada " << i << " del cañon defensivo: " << endl;
        cin >> coordenadasD[i];
    }

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

            for(int t = 1; t<=5; t++){
                int x = trayectoria
            }



        }
        case 2:{}
        case 3:{}
        }
    }
}
