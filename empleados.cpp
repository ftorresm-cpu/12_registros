#include <iostream>
#include <string>
using namespace std;

struct Empleado {
    int numero;
    string nombre;
    float ventas[12];
    float salario;
};

int main() {
    int n;
    cin >> n;
    
    Empleado lista[100];
    
    for (int i = 0; i < n; i++) {
        cin >> lista[i].numero;
        cin >> lista[i].nombre;
        cin >> lista[i].salario;
        for (int m = 0; m < 12; m++) {
            cin >> lista[i].ventas[m];
        }
    }
    
    int posMayorVentas = 0;
    float maxVentasAnio = -1;
    
    for (int i = 0; i < n; i++) {
        float sumaVentasEmpleado = 0;
        
        for (int m = 0; m < 12; m++) {
            sumaVentasEmpleado = sumaVentasEmpleado + lista[i].ventas[m];
        }
        
        if (sumaVentasEmpleado > maxVentasAnio) {
            maxVentasAnio = sumaVentasEmpleado;
            posMayorVentas = i;
        }
        
        if (sumaVentasEmpleado > 100) {
            lista[i].salario = lista[i].salario * 1.10;
        }
    }
    
    cout << "Mayor venta anual: " << lista[posMayorVentas].numero << " " << lista[posMayorVentas].nombre << endl;
    
    for (int i = 0; i < n; i++) {
        if (lista[i].ventas[11] < 30) {
            cout << lista[i].numero << " " << lista[i].nombre << endl;
        }
    }
    
    return 0;
}
