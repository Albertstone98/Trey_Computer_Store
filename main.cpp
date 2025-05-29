#include <iostream>
#include "funciones.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "spanish");

    /// 1. LOTE MARCAS
    const int CANT_MARCAS = 10;
    int vCodMarcas[CANT_MARCAS];
    string vNombreMarca[CANT_MARCAS];
    bool seCargaronMarcas = false;

    int opcion;
    bool salir = false;

    do
    {
        opcion = mostrarMenu();

        system("cls");
        switch(opcion)
        {
        case 1:
            cout << "Soy Opci�n 1" << endl;
            if(!seCargaronMarcas){
                seCargaronMarcas = cargarLoteMarcas(vCodMarcas, vNombreMarca, CANT_MARCAS);
                mostrarMarcas(vCodMarcas, vNombreMarca, CANT_MARCAS);
            }
            else{
                cout << "Ya se carg� el Lote de Marcas." << endl;
            }

            break;
        case 2:
            cout << "Soy Opci�n 2" << endl;
            break;
        case 3:
            cout << "Soy Opci�n 3" << endl;
            break;
        case 4:
            cout << "Soy Opci�n 4" << endl;
            break;
        case 5:
            cout << "Soy Opci�n 5" << endl;
            break;
        case 0:
            cout << "Adi�s amiguito..." << endl;
            salir = true;
            break;
        default:
            cout << "Opci�n Ingresada No V�lida." << endl;
            break;
        }
        system("pause");
    }
    while(!salir);

    return 0;
}
