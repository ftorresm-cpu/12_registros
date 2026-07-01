##include <iostream>
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
    
    for (int i = 0; i < n; i++) {
        cin >> lista[i].nombre;
        cin >> lista[i].dni;
        cin >> lista[i].edad;
    }
    
    return 0;
}
