#include <iostream>
#include <string>
using namespace std;

struct Persona {
    string nombre;
    string dni;
    int edad;
};

int main() {
    int n;
    cin >> n;
    
    Persona lista[100];
    
    int sumaEdades = 0;
    int mayoresDe50 = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> lista[i].nombre;
        cin >> lista[i].dni;
        cin >> lista[i].edad;
        
        sumaEdades = sumaEdades + lista[i].edad;
        
        if (lista[i].edad > 50) {
            mayoresDe50 = mayorsDe50 + 1;
        }
    }
    
    float promedio = (float)sumaEdades / n;
    cout << mayoresDe50 << endl;
    cout << promedio << endl;
    
    for (int i = 0; i < n; i++) {
        cout << lista[i].nombre << " " << lista[i].dni << " " << lista[i].edad << endl;
    }
    
    return 0;
}
