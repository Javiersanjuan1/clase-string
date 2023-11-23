#include <iostream>
#include <string>

int main() {
    std::string miCadena = "Hola, esto es una cadena de ejemplo.";

    std::string subcadenaBuscar = "cadena";
    size_t indice = miCadena.find(subcadenaBuscar);

    if (indice != std::string::npos) {
        std::cout << "La subcadena '" << subcadenaBuscar << "' se encuentra en el índice " << indice << std::endl;

        std::string nuevaSubcadena = "ejemplo";
        miCadena.replace(indice, subcadenaBuscar.length(), nuevaSubcadena);

        std::cout << "Cadena después de reemplazar: " << miCadena << std::endl;
    } else {
        std::cout << "La subcadena '" << subcadenaBuscar << "' no se encontró en la cadena." << std::endl;
    }

    return 0;
}
