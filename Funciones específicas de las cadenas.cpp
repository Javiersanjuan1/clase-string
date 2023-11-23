#include <iostream>
#include <string>

int main() {
    // Crear una cadena utilizando la clase string
    std::string miCadena = "Hola, esto es una cadena de ejemplo.";

    // Utilizar la función find() para buscar una subcadena
    std::string subcadenaBuscar = "cadena";
    size_t indice = miCadena.find(subcadenaBuscar);

    // Imprimir el índice de inicio de la subcadena
    if (indice != std::string::npos) {
        std::cout << "La subcadena '" << subcadenaBuscar << "' se encuentra en el índice " << indice << std::endl;

        // Utilizar la función replace() para reemplazar la subcadena
        std::string nuevaSubcadena = "ejemplo";
        miCadena.replace(indice, subcadenaBuscar.length(), nuevaSubcadena);

        // Imprimir la cadena resultante
        std::cout << "Cadena después de reemplazar: " << miCadena << std::endl;
    } else {
        std::cout << "La subcadena '" << subcadenaBuscar << "' no se encontró en la cadena." << std::endl;
    }

    return 0;
}
