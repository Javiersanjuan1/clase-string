#include <iostream>
#include <string>
int main() {
    // Crear dos cadenas utilizando la clase string
    std::string cadena1 = "Hola, ";
    std::string cadena2 = "esto es una concatenacion.";

    // Concatenar las dos cadenas usando el operador '+'
    std::string cadenaConcatenada = cadena1 + cadena2;

    // Imprimir la cadena resultante
    std::cout << "Cadena concatenada: " << cadenaConcatenada << std::endl;

    return 0;
}