#include <iostream>
#include <string>
using namespace std;

struct Libro{
    string titulo;
    string autor;
    string editorial;
    int anioPublicacion;
};

int main(){
    int n;
    Libro libros[100];
    cout << "Ingrese la atidad de libros:";
    cin >> n;
    cin.ignore();
    
    return 0;
}