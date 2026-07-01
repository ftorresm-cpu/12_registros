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
    
    return 0;
}
