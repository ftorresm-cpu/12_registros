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
    
    Empleado empMayor = lista[0];
    Empleado empMenor = lista[0];
    
    for (int i = 1; i < n; i++) {
        if (lista[i].sueldo > empMayor.sueldo) {
            empMayor = lista[i];
        }
        if (lista[i].sueldo < empMenor.sueldo) {
            empMenor = lista[i];
        }
    }
    
    cout << empMayor.nombre << " " << empMayor.sexo << " " << empMayor.sueldo << endl;
    cout << empMenor.nombre << " " << empMenor.sexo << " " << empMenor.sueldo << endl;
    
    return 0;
}
