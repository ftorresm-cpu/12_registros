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
        cout << "1. Registrar producto" << endl;
        cout << "2. Listar productos" << endl;
        cout << "3. Buscar producto" << endl;
        cout << "4. Actualizar precio" << endl;
        cout << "5. Eliminar producto" << endl;
        cout << "6. Registrar venta" << endl;
        cout << "7. Listar ventas" << endl;
        cout << "8. Calcular total de caja" << endl;
        cout << "0. Salir" << endl;
        cout << "Ingrese opcion: ";
        cin >> opcion;
    }
    
    return 0;
}
