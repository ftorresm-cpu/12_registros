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
    
    return 0;
}
