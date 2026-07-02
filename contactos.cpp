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
        cout << "\n--- MENU DE CONTACTOS ---" << endl;
        cout << "1. Agregar contacto" << endl;
        cout << "2. Modificar contacto" << endl;
        cout << "3. Listar contactos" << endl;
        cout << "4. Buscar por servidor" << endl;
        cout << "5. Eliminar contacto" << endl;
        cout << "6. Buscar por email" << endl;
        cout << "0. Salir del programa" << endl;
        cout << "-------------------------" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        cout << endl;
        
        if (opcion == 1) {
            cin >> agenda[total].nombre;
            cin >> agenda[total].sexo;
            cin >> agenda[total].edad;
            cin >> agenda[total].email;
            total = total + 1;
            
        } else if (opcion == 2) {
            string correo;
            cin >> correo;
            for (int i = 0; i < total; i++) {
                if (agenda[i].email == correo && agenda[i].nombre != "VACIO") {
                    cin >> agenda[i].nombre;
                    cin >> agenda[i].sexo;
                    cin >> agenda[i].edad;
                    cin >> agenda[i].email;
                }
            }
            
        } else if (opcion == 3) {
            for (int i = 0; i < total; i++) {
                if (agenda[i].nombre != "VACIO") {
                    cout << agenda[i].nombre << " " << agenda[i].sexo << " " << agenda[i].edad << " " << agenda[i].email << endl;
                }
            }
            
        } else if (opcion == 4) {
            string servidor;
            cin >> servidor;
            for (int i = 0; i < total; i++) {
                if (agenda[i].nombre != "VACIO") {
                    if (agenda[i].email.find(servidor) != string::npos) {
                        cout << agenda[i].nombre << " " << agenda[i].email << endl;
                    }
                }
            }
            
        } else if (opcion == 5) {
            string correo;
            cin >> correo;
            for (int i = 0; i < total; i++) {
                if (agenda[i].email == correo) {
                    agenda[i].nombre = "VACIO";
                    cout << "Contacto borrado" << endl;
                }
            }
            
        } else if (opcion == 6) {
            string buscado;
            cin >> buscado;
            for (int i = 0; i < total; i++) {
                if (agenda[i].email == buscado && agenda[i].nombre != "VACIO") {
                    cout << "Posicion: " << i << endl;
                    cout << agenda[i].nombre << " " << agenda[i].email << endl;
                }
            }
        } else if (opcion < 0 || opcion > 6) {
            cout << "Opcion invalida. Intente de nuevo." << endl;
        }
    }
    
    return 0;
}
