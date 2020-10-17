#include <iostream>

using namespace std;

int main()
{
     //COORDENADAS DE LOS CAÑONES
    int coordenadasO[2]={0,0}, coordenadasD[2];

    cout << "ingrese la altura del cañon ofensivo: " << endl;
    cin >> coordenadasO[1];

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

        cout << "ingrese 0 para salir" << '\n' << endl;
        cin >> op;
        switch (op) {
        case 1:{}
        case 2:{}
        case 3:{}

        }
}
