#include <iostream>
#include <string>
using namespace std;

struct Persona {
    string nombre;
    int dia;
    int mes;
    int anio;
};

int main() {
    int n;
    cin >> n;
    
    Persona lista[100];
    
    for (int i = 0; i < n; i++) {
        cin >> lista[i].nombre;
        cin >> lista[i].dia;
        cin >> lista[i].mes;
        cin >> lista[i].anio;
    }
    
    int mesBuscado;
    cin >> mesBuscado;
    
    while (mesBuscado != 0) {
        
        for (int i = 0; i < n; i++) {
            if (lista[i].mes == mesBuscado) {
                cout << lista[i].nombre << " " << lista[i].dia << " " << lista[i].mes << " " << lista[i].anio << endl;
            }
        }
        cin >> mesBuscado;
    }
    
    return 0;
}
