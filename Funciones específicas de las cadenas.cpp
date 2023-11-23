#include <iostream>
#include <string>

int main() {
    // Crear una cadena utilizando la clase string
    std::string miCadena = "Hola, esto es una cadena de ejemplo.";
    // Utilizar la función find() para buscar una subcadena
    std::string subcadenaBuscar = "cadena";
    size_t indice = miCadena.find(subcadenaBuscar);
