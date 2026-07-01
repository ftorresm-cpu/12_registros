#include <iostream>
#include <string>
using namespace std;

struct Empleado {
    string nombre;
    char sexo;
    float sueldo;
};

int main() {
    int n;
    cin >> n;
    
    Empleado lista[100];
    
    for (int i = 0; i < n; i++) {
        cin >> lista[i].nombre;
        cin >> lista[i].sexo;
        cin >> lista[i].sueldo;
    }
    
    return 0;
}
