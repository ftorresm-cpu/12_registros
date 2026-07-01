#include <iostream>
#include <string>
using namespace std;

struct Atleta {
    string nombre;
    string pais;
    string disciplina;
    int medallas;
};

int main() {
    int n;
    cin >> n;
    
    Atleta lista[100];
    
    for (int i = 0; i < n; i++) {
        cin >> lista[i].nombre;
        cin >> lista[i].pais;
        cin >> lista[i].disciplina;
        cin >> lista[i].medallas;
    }
    
    string paisBuscado;
    cin >> paisBuscado;
    
    Atleta mejorAtleta;
    mejorAtleta.medallas = -1;

    for (int i = 0; i < n; i++) {
        if (lista[i].pais == paisBuscado) {
            cout << lista[i].nombre << " " << lista[i].pais << " " << lista[i].disciplina << " " << lista[i].medallas << endl;
            
            if (lista[i].medallas > mejorAtleta.medallas) {
                mejorAtleta = lista[i];
            }
        }
    }
    
    if (mejorAtleta.medallas != -1) {
        cout << mejorAtleta.nombre << " " << mejorAtleta.medallas << endl;
    }
    
    return 0;
}
