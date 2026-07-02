#include <iostream>
#include <string>
using namespace std;

struct ContactoEmail {
    string nombre;
    char sexo;
    int edad;
    string email;
};

int main() {
    ContactoEmail agenda[100];
    int total = 0;
    int opcion;
    
    opcion = -1; 
    while (opcion != 0) {
        cout << "1. Agregar  2. Modificar  3. Listar  4. Servidor  5. Eliminar  6. Buscar  0. Salir" << endl;
        cin >> opcion;
        
        if (opcion < 0 || opcion > 6) {
            cout << "Opcion invalida" << endl;
        }
    }
    
    return 0;
}
