#include <iostream>
#include <string>
using namespace std;

struct Producto {
    string nombre;
    float precio;
};

struct Venta {
    int idVenta;
    string producto;
    int cantidad;
    float precioTotal;
};

int main() {
    Producto inventario[100];
    int totalProductos = 0;
    
    Venta historial[100];
    int totalVentas = 0;
    
    int opcion = -1;
    
    while (opcion != 0) {
        cout << "\n--- MENU TIENDA ---" << endl;
        cout << "1. Registrar producto\n2. Listar productos\n3. Buscar producto" << endl;
        cout << "4. Actualizar precio\n5. Eliminar producto\n6. Registrar venta" << endl;
        cout << "7. Listar ventas\n8. Calcular total de caja\n0. Salir" << endl;
        cout << "Ingrese opcion: ";
        cin >> opcion;
        
        if (opcion == 1) {
            cin >> inventario[totalProductos].nombre;
            cin >> inventario[totalProductos].precio;
            totalProductos = totalProductos + 1;
            
        } else if (opcion == 2) {
            for (int i = 0; i < totalProductos; i++) {
                if (inventario[i].precio > 0) {
                    cout << inventario[i].nombre << " " << inventario[i].precio << endl;
                }
            }
            
        } else if (opcion == 3) {
            string buscado;
            cin >> buscado;
            for (int i = 0; i < totalProductos; i++) {
                if (inventario[i].nombre == buscado && inventario[i].precio > 0) {
                    cout << inventario[i].nombre << " " << inventario[i].precio << endl;
                }
            }
            
        } else if (opcion == 4) {
            string modificar;
            cin >> modificar;
            for (int i = 0; i < totalProductos; i++) {
                if (inventario[i].nombre == modificar && inventario[i].precio > 0) {
                    cin >> inventario[i].precio;
                }
            }
            
        } else if (opcion == 5) {
            string borrar;
            cin >> borrar;
            for (int i = 0; i < totalProductos; i++) {
                if (inventario[i].nombre == borrar) {
                    inventario[i].precio = 0;
                    cout << "Eliminado" << endl;
                }
            }
        }
    }
    
    return 0;
}
