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
    int opcion = -1;
    
    while (opcion != 0) {
        cout << "1. Agregar  2. Modificar  3. Listar  4. Servidor  5. Eliminar  6. Buscar  0. Salir" << endl;
        cin >> opcion;
        
        if (opcion == 1) {
            cin >> agenda[total].nombre;
            cin >> agenda[total].sexo;
            cin >> agenda[total].edad;
            cin >> agenda[total].email;
            total = total + 1;
            
        } else if (opcion == 3) {
            for (int i = 0; i < total; i++) {
                cout << agenda[i].nombre << " " << agenda[i].sexo << " " << agenda[i].edad << " " << agenda[i].email << endl;
            }
            
        } else if (opcion == 6) {
            string buscado;
            cin >> buscado;
            for (int i = 0; i < total; i++) {
                if (agenda[i].email == buscado) {
                    cout << "Posicion: " << i << endl;
                    cout << agenda[i].nombre << " " << agenda[i].email << endl;
                }
            }
        }
    }
    
    return 0;
}
