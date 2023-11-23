#include <iostream>
#include <string>

int main() {
    std::string miCadena = "Hola, esta es una cadena de ejemplo.";

    size_t inicio = 6;
    size_t longitud = 4;
    std::string subcadena = miCadena.substr(inicio, longitud);
    std::cout << "Subcadena obtenida: " << subcadena << std::endl;
    size_t posicionInsercion = 12;
    std::string cadenaAInsertar = "mundo ";
    miCadena.insert(posicionInsercion, cadenaAInsertar);
    std::cout << "Cadena después de la inserción: " << miCadena << std::endl;
    return 0;
}
