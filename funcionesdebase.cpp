#include <iostream>
#include <string>
int main() {
    std::string miCadena = "Hola, esto es una cadena.";
    std::cout << "El tamaño de la cadena es: " << miCadena.size() << " caracteres." << std::endl;
    if (miCadena.empty()) {
        std::cout << "La cadena está vacía." << std::endl;
    } else {
        std::cout << "La cadena no está vacía." << std::endl;
    }

    return 0;
}