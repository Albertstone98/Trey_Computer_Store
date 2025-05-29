#include <iostream>
#include "funciones.h"
using namespace std;

int mostrarMenu()
{
    int opcion;

    system("cls");
    cout << " ---------------------------------" << endl;
    cout << "|          Menú Principal         |" << endl;
    cout << " ---------------------------------" << endl;
    cout << "|     1. Cargar Marcas            |" << endl;
    cout << "|     2. Cargar Productos         |" << endl;
    cout << "|     3. Cargar Formas de Pago    |" << endl;
    cout << "|     4. Cargar Ventas            |" << endl;
    cout << "|     5. Informes                 |" << endl;
    cout << "|                                 |" << endl;
    cout << "|     0. Salir del Programa       |" << endl;
    cout << " ---------------------------------" << endl;
    cout << "|     Ingrese opción: ";
    cin >> opcion;

    return opcion;
}

bool cargarLoteMarcas(int vCodMarca[], string vNombre[], int tam)
{
    for(int x = 0; x < tam; x++)
    {
        system("cls");
        cout << "-------------------------------" << endl;
        cout << "Ingreso N° " << x + 1 << endl;
        cout << "-------------------------------" << endl;

        do
        {
            cout << "Ingrese Código de Marca (1 a 10): ";
            cin >> vCodMarca[x];

            if (vCodMarca[x] < 1 || vCodMarca[x] > 10)
            {
                cout << "Código no válido.";
            }

        }
        while (vCodMarca[x] < 1 || vCodMarca[x] > 10);

        do
        {
            cout << "Ingrese Nombre de Marca: ";
            cin.ignore();
            getline(cin, vNombre[x]);

            if (vNombre[x] == "")
            {
                cout << "El campo no puede quedar vacío.";
            }

        }
        while (vNombre[x] == "");

        cout << "Carga Exitosa!!!" << endl;
        //system("pause");
    }

    return true;
}

void mostrarMarcas(int vCodMarca[], string vNombre[], int tam)
{
    system("cls");
    for(int x = 0; x < tam; x++)
    {
        cout << "-------------------------------" << endl;
        cout << "Código de Marca: " << vCodMarca[x] << endl;
        cout << "Nombre de Marca: " << vNombre[x] << endl;
    }

    cout << "-------------------------------" << endl;
    system("pause");
}
