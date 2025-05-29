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
            cout << "Soy Opción 1" << endl;
            if(!seCargaronMarcas){
                seCargaronMarcas = cargarLoteMarcas(vCodMarcas, vNombreMarca, CANT_MARCAS);
                mostrarMarcas(vCodMarcas, vNombreMarca, CANT_MARCAS);
            }
            else{
                cout << "Ya se cargó el Lote de Marcas." << endl;
            }

            break;
        case 2:
            cout << "Soy Opción 2" << endl;
            break;
        case 3:
            cout << "Soy Opción 3" << endl;
            break;
        case 4:
            cout << "Soy Opción 4" << endl;
            break;
        case 5:
            cout << "Soy Opción 5" << endl;
            break;
        case 0:
            cout << "Adiós amiguito..." << endl;
            salir = true;
            break;
        default:
            cout << "Opción Ingresada No Válida." << endl;
            break;
        }
        system("pause");
    }
    while(!salir);

    return 0;
}
