#include "Menu.h"

void Menu::menu() {
    Lista l;
    while (opcion != 6) {
        cout << "\n\t\tMENU" << endl;
        cout << "*************************************" << endl;
        cout << "* 1- VER LISTA **********************" << endl;
        cout << "* 2- AGREGAR COSAS ******************" << endl;
        cout << "* 3- ELIMINAR UNA COSA **************" << endl;
        cout << "* 4- MARCAR UNA COSA COMO TERMINADO *" << endl;
        cout << "* 5- MANDAR LA LISTA A UN ARCHIVO ***" << endl;
        cout << "* 6- SALIR DEL PROGRAMA *************" << endl;
        cout << "*************************************" << endl << endl;
        cout << "Ingrese la opcion (NUMERO) que desee realizar:\t";
        cin >> opcion;
        cout << endl;

        switch (opcion){
        case 1: l.show();
            break;
        case 2: l.add();
            break;
        case 3: l.cut();
            break;
        case 4: l.check();
            break;
        case 5: l.file();
            break;
        case 6:
            system("cls");
            cout << "Adios..." << endl;
            break;
        default:
            system("cls");
            cout << "No existe ninguna opcion con ese numero...\n" << endl;
        }
    }
}